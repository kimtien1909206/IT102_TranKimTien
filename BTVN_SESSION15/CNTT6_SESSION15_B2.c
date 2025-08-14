#include <stdio.h>
int number(int n) {
    if (n < 0) {
        n = -n;
    }
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    printf("Tong cac chu so cua %d la: %d\n", num, number(num));
    return 0;
}
