#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, found = 0;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d co trong mang tai vi tri %d.\n", x, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Phan tu %d khong co trong mang.\n", x);
    }

    return 0;
}

