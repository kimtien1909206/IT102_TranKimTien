#include <stdio.h>
int binarySearch(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
int main() {
    int a[100], n, x, num;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    printf("Nhap mang (tang dan):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    num = binarySearch(a, n, x);
    if (num == -1) {
        printf("Khong tim thay\n");
    } else {
        printf("Tim thay tai vi tri %d\n", num);
    }
    return 0;
}

