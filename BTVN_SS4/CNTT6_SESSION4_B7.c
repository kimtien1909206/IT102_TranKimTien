#include <stdio.h>
int main ()
{
    int year;
    printf (" Moi ban nhap vao nam can kiem tra : ");
    scanf ("%d", &year);
    if ( year >0 )
    {
        if ((year % 4 == 0 && year % 100 != 0 )|| (year % 400 == 0))
        {
            printf ("Nam %d là nam nhuan ", year);
        } else
        {
            printf ("Nam %d khong phai la nam nhuan", year);
        }
    } else
    {
        printf ("Nam khong hop le", year);
    }
    return 0;
}
