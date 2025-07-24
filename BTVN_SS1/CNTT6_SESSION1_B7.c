#include<stdio.h>
int main(){
    int number = 12345;

    int firstNumber = number % 10;
    int secondNumber = (number %100) / 10;
    int thirdNumber = (number %1000) / 100;
    int fourNumber = (number %10000) / 1000;
    int fiveNumber = (number %100000) / 10000;

    int result = firstNumber + secondNumber + thirdNumber + fourNumber + fiveNumber;

    printf("result: %d", result);
    return 0;
}
