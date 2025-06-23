#include <stdio.h>
#include <stdlib.h>

int findMax(int **arr, int rows, int cols) {
    int max = arr[0][0];
    for (int i = 1; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           if (arr[i][j] > max) {
              max = arr[i][j];
           }
        }
    }
    return max;
}

int findMin(int **arr, int rows, int cols) {
    int min = arr[0][0];
    for (int i = 1; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
             if (arr[i][j] < min) {
                min = arr[i][j];
             }
        }
    }
    return min;
}

int main() {
    int rows, cols;
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);
    if (rows <= 0 || cols <= 0) {
        printf("So cot va song hang khong hop le\n");
        return 0;
    } else if (rows <= 0) {
        printf("So hang khong hop le\n");
    } else if (cols <= 0) {
        printf("So cot khong hop le\n");
        return 0;
    }

    int **arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
          arr[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("Nhap cac phan tu cua mang: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = findMax(arr, rows, cols);
    int min = findMin(arr, rows, cols);
    printf("So lon nhat la: %d\n", max);
    printf("So nho nhat la: %d\n", min);
    for (int i = 0; i < rows; i++){
    free(arr[i]);
    }
    free(arr);
    return 0;

}