#include <stdio.h>
int main() {
    int a, b;
    printf("Nhap hai so nguyen a va b: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    printf("Cac so nguyen to trong khoang [%d, %d] la:\n", a, b);
    for (int n = a; n <= b; n++) {
        int count = 0;
        if (n < 2) {
            continue;
        }
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                count++;
            }
        }
        if (count == 0) {
            printf("%d ", n);
        }
    }

    return 0;
}

