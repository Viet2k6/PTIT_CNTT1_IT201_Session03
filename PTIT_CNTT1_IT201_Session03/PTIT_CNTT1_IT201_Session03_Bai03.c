#include <stdio.h>
#include <stdlib.h>

int averageEven(int *arr, int size){
    int sum = 0;
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
           sum += arr[i];
           count++;
        }
    }
    if (count == 0){
        return 0;
    } else {
        return sum / count;
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu (0 < n < 1000): ");
    scanf("%d", &n);
    if (n <= 0 || n >= 1000) {
        printf("So luong phan tu khong hop le\n");
        return 1;
    }

    int *arr = malloc(sizeof(int) * n);
    if (arr == NULL) {
        printf("Khong the cap phat bo nho\n");
        return 1;
    }

    printf("Nhap %d phan tu: \n", n);
    for (int i = 0; i < n; i++) {
         scanf("%d", &arr[i]);
    }
    int result = averageEven(arr, n);
    printf("Trung binh cong cac so chan trong mang la: %d\n", result);
    free(arr);
    return 0;
}