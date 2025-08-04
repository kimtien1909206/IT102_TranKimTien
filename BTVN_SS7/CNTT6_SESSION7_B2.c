#include <stdio.h>
int main ()
{
    int n;
    int number =1;
    printf ("Moi ban nhap vao mot so nguyen duong n: ");
    scanf ("%d", &n);
    if (n <= 0)
    {
        printf ("So n khong hop le !!!");
    } else
    {
        for (int i =1 ; i <= n ; ++i)
        {
            number *= i;
        }
    }
    printf ("%d! = %d", n, number);
    return 0;
}
