// Bài 5 session 14 
#include <stdio.h>
int isPrime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    if (isPrime(num) == 1) {
        printf("%d la so nguyen to.\n", num);
    } else {
        printf("%d khong phai so nguyen to.\n", num);
    }

    return 0;
}

