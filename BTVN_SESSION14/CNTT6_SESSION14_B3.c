#include<stdio.h>
int add (int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
int main ()
{
    int number;
    printf ("Moi nhap vao so nguyen bat ki : ");
    scanf ("%d", &number);
    if (number < 0 )
    {
        printf ("Khong co so giai thua !!");
    } else
    {
        printf (" Giai thua duoc truyen vao la : %d", add(number));
    }
    return 0;
}