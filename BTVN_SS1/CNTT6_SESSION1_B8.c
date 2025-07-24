#include<stdio.h>
int main(){
    int number = 12345;

    int firstNumber = number % 10;
    int secondNumber = (number %100) / 10;
    int thirdNumber = (number %1000) / 100;
    int fourNumber = (number %10000) / 1000;
    int fiveNumber = (number %100000) / 10000;
    int result = firstNumber * 10000 + secondNumber * 1000 + thirdNumber * 100 + fourNumber * 10 + fiveNumber;
    printf("result: %d\n", result);
    return 0;
}
