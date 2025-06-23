#include<stdio.h>
#include<stdlib.h>

int tongDuongCheoChinh(int **arr, int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i][i];
    }
    return sum;
}

int tongDuongCheoPhu(int **arr, int size) {
    int sum = 0;
    for (int i =0; i < size; i++)
    {
        sum += arr[i][size - 1 - i];
    }
    return sum;
}

int main() {
    int rows, cols;
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);

    if (rows <= 0 && cols <= 0) {
        printf("So cot va so hang khong hop le\n");
        return 0;
    } else if (rows <= 0) {
        printf("So hang khong hop le\n");
    } else if (cols <= 0) {
        printf("So cot khong jop le\n");
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

    if (rows != cols)
    {
        printf("Duong cheo chinh khong ton tai\n");
        printf("Duong cheo phu khong ton tai\n");
    } else {
        int mainSum = tongDuongCheoChinh(arr, rows);
        int secondarySum = tongDuongCheoPhu(arr, rows);
        printf("Tong duong cheo chinh = %d\n", mainSum);
        printf("Tong duong cheo phu = %d\n", secondarySum);
    }
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}