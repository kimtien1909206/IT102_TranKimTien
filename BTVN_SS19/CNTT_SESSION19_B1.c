#include <stdio.h>
void importElement(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", arr + i);   
    }
}
void display(int *arr, int n) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("arr [%d] = %d \n", i, *(arr + i));
    }
    printf("\n");
}
int sum(int *arr, int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result += *(arr + i);
    }
    return result;
}
int Max(int *arr, int n) {
    int maxCount = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > maxCount) {
            maxCount = *(arr + i);
        }
    }
    return maxCount;
}
int main() {
    int arr[100];
    int n = 0;
    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                importElement(arr, n);
                break;
            case 2:
                if (n > 0)
                {
                    display(arr, n);
                }
                else
                {
                    printf("Mang chua duoc nhap!\n");
                }
                break;
            case 3:
                printf("Do dai mang: %d\n", n);
                break;
            case 4:
                if (n > 0)
                {
                    printf("Tong cac phan tu: %d\n", sum(arr, n));
                }else
                {
                    printf("Mang chua duoc nhap!\n");
                }
                break;
            case 5:
                if (n > 0)
                {
                    printf("Phan tu lon nhat: %d\n", Max(arr, n));
                }else
                {
                    printf("Mang chua duoc nhap!\n");
                }
                break;
            case 6:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while(choice != 6);
    return 0;
}
