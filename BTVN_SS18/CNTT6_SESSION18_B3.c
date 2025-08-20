#include <stdio.h>
void sum(int a, int b, int *result) {
*result = a + b;
}
int main (){
    int a = 20;
    int b = 21;
    int number;
    sum(a, b, &number);
    printf ("Tong cua hai so %d va %d la : %d", a , b, number);
    return 0;
}
