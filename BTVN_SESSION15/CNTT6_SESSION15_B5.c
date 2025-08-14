#include <stdio.h>
int Max;
int add(int arr[], int n) {
    int elemen, num = 0;
    for (int i = 0; i < n; i++) {
        int scout = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                scout++;
            }
        }
        if (scout > num) {
            num = scout;
            elemen = arr[i];
        }
    }
    Max = num;
    return elemen;
}
int main() {
    int a[100], n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    int phanTu = add(a, n);
    printf("Phan tu xuat hien nhieu nhat: %d\n", elemen);
    printf("So lan xuat hien: %d\n", Max);
    return 0;
}

