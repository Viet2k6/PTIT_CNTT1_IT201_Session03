#include <stdio.h>
#include <stdlib.h>

int CalRowSum(int **arr, int rows, int cols, int k) {
    int sum = 0;
    for (int j = 0; j < cols; j++) {
        sum += arr[k][j];
    }
    return sum;
}

int main() {
    int rows, cols, k;
    printf("Nhap so hang :");
    scanf("%d", &rows);
    if (rows <= 0 || rows >= 1000) {
        printf("So hang khong hop le\n");
        return 0;
    }

    printf("Nhap so cot: ");
    scanf("%d", &cols);
    if (cols <= 0 || cols >= 1000) {
        printf("So cot khong hop le\n");
        return 0;
    }

    int **arr = (int **)malloc(rows * sizeof (int *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof (int));
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Nhap chi so hang k muon tinh tong: ");
    scanf("%d", &k);
    if (k < 0 || k >= rows) {
        printf("Hang khong ton tai\n");
    } else {
        int sum = CalRowSum(arr, rows, cols, k);
        printf("sum = %d\n", sum);
    }
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
