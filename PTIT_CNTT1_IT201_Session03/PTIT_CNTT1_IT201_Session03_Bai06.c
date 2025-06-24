#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,m;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n <= 0 || n >= 1000) {
        printf("So luong phan tu khong hop le\n");
        return 0;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho\n");
        return 1;
    }

    printf("Nhap cac phan tu: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap so luong phan tu muon them: ");
    scanf("%d", &m);
    if (m < 0 || m + n >= 1000) {
        printf("So luong phan tu khong hop le\n");
        free(arr);
        return 0;
    }

    int *arr2 = (int *)realloc(arr, (n + m) * sizeof(int));
    if (arr2 == NULL) {
        printf("Khong the cap phat bo nho moi\n");
        free(arr);
        return 1;
    }
    arr = arr2;
    printf("Nhap cac phan tu moi: \n");
    for (int i = n; i < n + m; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Mang sau khi them la: \n");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
