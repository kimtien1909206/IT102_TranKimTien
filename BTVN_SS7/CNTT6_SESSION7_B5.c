#include <stdio.h>
#include <math.h>
int main() {
    int number, originalNumber, digitCount = 0, sum = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &number);
    originalNumber = number;
    int temp = number;
    while (temp > 0) {
        digitCount++;
        temp /= 10;
    }
    temp = number;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digitCount);
        temp /= 10;
    }
    if (sum == originalNumber) {
        printf("%d La so Armstrong.\n", originalNumber);
    } else {
        printf("%d khong phai la so Armstrong.\n", originalNumber);
    }
    return 0;
}

