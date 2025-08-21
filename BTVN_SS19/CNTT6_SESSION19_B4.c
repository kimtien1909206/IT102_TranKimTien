#include <stdio.h>
void integer(int *arr, int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", arr + i);
    }
}
void evenNumber(int *arr, int n) {
    printf("Cac phan tu chan: ");
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0) {
            printf("%d ", *(arr + i));
        }
    }
    printf("\n");
}
void prime(int *arr, int n) {
    printf("Cac phan tu la so nguyen to: ");
    for (int i = 0; i < n; i++) {
        int x = *(arr + i);
        int num = 1;
        if (x < 2)
        {
            num = 0;
        }else {
            for (int j = 2; j * j <= x; j++) {
                if (x % j == 0) {
                    num = 0;
                    break;
                }
            }
        }
        if (num)
        {
            printf("%d ", x);
        }
    }
    printf("\n");
}
void inverseFunction(int *arr, int n) {
    int i = 0, j = n - 1;
    while (i < j) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
        i++;
        j--;
    }
    printf("Mang sau khi dao nguoc: ");
    for (int k = 0; k < n; k++) printf("%d ", *(arr + k));
    printf("\n");
}
void ascendingOrder(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) printf("%d ", *(arr + i));
    printf("\n");
}
void descendingOrder(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) < *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    printf("Mang sau khi sap xep giam dan: ");
    for (int i = 0; i < n; i++) printf("%d ", *(arr + i));
    printf("\n");
}
void arrange(int *arr, int n) {
    int c;
    printf("1. Tang dan\n");
    printf("2. Giam dan\n");
    printf("Chon kieu sap xep: ");
    scanf("%d", &c);
    if (c == 1)
    {
        ascendingOrder(arr, n);
    }else if (c == 2)
    {
        descendingOrder(arr, n);
    }else
    {
        printf("Lua chon khong hop le!\n");
    }
}
void search(int *arr, int n) {
    int x, found = 0;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == x) {
            printf("Tim thay %d tai vi tri %d\n", x, i);
            found = 1;
        }
    }
    if (!found) printf("Khong tim thay %d trong mang\n", x);
}
int main() {
    int arr[100];
    int n = 0;
    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Nhap vao 1 phan tu va tim kiem\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                integer(arr, &n);
                break;
            case 2:
                evenNumber(arr, n);
                break;
            case 3:
                prime(arr, n);
                break;
            case 4:
                inverseFunction(arr, n);
                break;
            case 5:
                arrange(arr, n);
                break;
            case 6:
                search(arr, n);
                break;
            case 7:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 7);
    return 0;
}

