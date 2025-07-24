#include <stdio.h>
int main () {
    int num1 = 5;
    int num2 = 7;
    float num3 = 10.5;
    float sum1 = num1 + num2 + num3;
    int sum2 = num1 + num2 + (int) num3;
    printf("sum1: %.1f\n", sum1);
    printf("sum2: %d\n", sum2);
    return 0;
}