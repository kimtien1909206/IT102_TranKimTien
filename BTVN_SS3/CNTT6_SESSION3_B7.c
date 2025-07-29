#include<stdio.h>
int main(){
    int number;
    printf("Moi ban nhap mot so co bon chu so: ");
    scanf("%d", &number);
    int firstNumber = number % 10;
    int secondNumber = (number %100) / 10;
    int thirdNumber = (number %1000) / 100;
    int fourNumber = (number %10000) / 1000;


    int result = firstNumber + secondNumber + thirdNumber + fourNumber;

    printf("result: %d\n", result);
    return 0;
}

