#include <stdio.h>
int main() {
    int n, x;
    int count = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    printf("Nhap chu so x (0-9): ");
    scanf("%d", &x);
    if (x < 0 || x > 9) {
        printf("x khong hop le. x phai trong khoang 0 - 9.\n");
        return 0;
    }
    if (n < 0) {
        n = -n;
    }
    while (n > 0) {
        int number = n % 10;
        if (number == x) {
            count++;
        }
        n = n / 10;
    }
    printf("Chu so %d xuat hien %d lan.\n", x, count);
    return 0;
}

