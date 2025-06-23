#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Nhap so luong phan tu (0 < n < 1000): ");
    scanf("%d", &n);
    if (n <= 0 || n >= 1000) {
    printf("So luong  phan tu khong hop le\n");
    return 0;
    }

    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
    printf("Khong the cap phat bo nho.\n");
    return 1;
    }

    printf("Nhap %d phan tu: \n", n);
    for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
    max = arr[i];
    }
   }
   printf("So lon nhat la: %d\n", max);
   free(arr);
   return 0;

}