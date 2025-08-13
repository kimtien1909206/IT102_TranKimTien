#include <stdio.h>
#define MAX 100
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sortAsc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}
void sortDesc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}
void linearSearch(int arr[], int n, int x) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Tim thay %d tai vi tri %d\n", x, i);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay %d\n", x);
    }
}
void binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1, found = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            printf("Tim thay %d tai vi tri %d\n", x, mid);
            found = 1;
            break;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (!found) {
        printf("Khong tim thay %d\n", x);
    }
}
int main() {
    int arr[MAX];
    int n = 0;
    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap so phan tu va gia tri\n");
        printf("2. In cac phan tu\n");
        printf("3. Them phan tu tai vi tri\n");
        printf("4. Sua phan tu tai vi tri\n");
        printf("5. Xoa phan tu tai vi tri\n");
        printf("6. Sap xep\n");
        printf("7. Tim kiem\n");
        printf("8. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("arr[%d] = ", i);
                    scanf("%d", &arr[i]);
                }
                break;
            }
            case 2: {
                for (int i = 0; i < n; i++) {
                    printf("arr[%d] = %d\n", i, arr[i]);
                }
                break;
            }
            case 3: {
                int pos, value;
                printf("Nhap vi tri chen: ");
                scanf("%d", &pos);
                printf("Nhap gia tri: ");
                scanf("%d", &value);
                if (pos < 0 || pos > n || n >= MAX) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = n; i > pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = value;
                    n++;
                }
                break;
            }
            case 4: {
                int pos, value;
                printf("Nhap vi tri sua: ");
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &value);
                    arr[pos] = value;
                }
                break;
            }
            case 5: {
                int pos;
                printf("Nhap vi tri xoa: ");
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                }
                break;
            }
            case 6: {
                int sub;
                printf("a. Giam dan (1)\n");
                printf("b. Tang dan (2)\n");
                printf("Chon: ");
                scanf("%d", &sub);
                if (sub == 1) sortDesc(arr, n);
                else if (sub == 2) sortAsc(arr, n);
                else printf("Lua chon khong hop le!\n");
                break;
            }
            case 7: {
                int sub, x;
                printf("a. Tuyen tinh (1)\n");
                printf("b. Nhi phan (2)\n");
                printf("Chon: ");
                scanf("%d", &sub);
                printf("Nhap gia tri can tim: ");
                scanf("%d", &x);
                if (sub == 1) linearSearch(arr, n, x);
                else if (sub == 2) {
                    sortAsc(arr, n);
                    binarySearch(arr, n, x);
                } else printf("Lua chon khong hop le!\n");
                break;
            }
            case 8:
                printf("Thoat chuong trinh...\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 8);
    return 0;
}


