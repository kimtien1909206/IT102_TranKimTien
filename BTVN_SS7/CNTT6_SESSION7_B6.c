#include <stdio.h>
int main() {
    int n, reversed = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    int original = n;
    int isNegative = 0;
    if (n < 0) {
        isNegative = 1;
        n = -n;
    }
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    if (isNegative)
        reversed = -reversed;
    printf("So dao nguoc la: %d\n", reversed);
    return 0;
}

