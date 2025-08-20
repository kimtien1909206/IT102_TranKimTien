#include<stdio.h>
void swap( int *a, int *b){
int temp = *a;
*a = *b;
*b = temp;
}
int main ()
{
    int a = 5;
    int b = 10;
    printf ("So truoc khi hoan doi la : a= %d, b= %d\n", a, b );
    swap(&a,&b);
    printf ("So sau khi hoan doi la : a= %d, b = %d\n",a , b);
    return 0;
}
