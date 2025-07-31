#include <stdio.h>
int main ()
{
    int num, total;

    printf ("Moi ban nhap vao so met khoi nuoc tieu thu trong thang: ");
    scanf ("%d", &num);
    if ( num >=0 && num <= 10 )
    {
        total = num * 6000;
        printf ("So tien nuoc ban su dung trong thang la: %d", total);
    } else if ( num >= 11 && num <= 20 )
    {
        total = num * 7000;
        printf ("So tien nuoc ban su dung trong thang la: %d", total);
    } else if ( num >= 21 && num <= 30 )
    {
        total = num * 8500;
        printf ("So tien nuoc ban su dung trong thang la: %d", total);
    } else
    {
        total = num * 10000;
        printf ("So tien nuoc ban su dung trong thang la: %d", total);
    }
    return 0;
}
