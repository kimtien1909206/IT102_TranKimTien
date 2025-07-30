#include <stdio.h>
int main ()
{
    int num1;
    int num2;
    int num3;
    printf ("Moi ban nhap vao 3 so nguyen: ");
    scanf ("%d %d %d", &num1 , &num2 , &num3);
    if (num1 <= num3 && num2 >= num3 )
    {
        printf ("So %d nam trong khoang so thu nhat va so thu hai ", num3);
    } else
    {
        printf ("so %d khong nam trong khoang so thu nhat va so thu hai", num3);
    }
    return 0;
}
