#include <stdio.h>
int main ()
{
    int num1;
    int num2;
    printf (" Moi ban nhap vao chi so cong to dien cu va chi so cong to dien moi : ");
    scanf ("%d %d", &num1 , &num2);
    if (num2 - num1 > 0 && num2 - num1 < 50)
    {
        int sum1 = (num2 - num1) * 10000;
        printf ("So tien dien phai tra trong thang do la: %d vnd", sum1);
    } else if (num2 - num1 >= 50 && num2 - num1 < 100)
    {
        int sum2 = (num2 - num1) * 15000;
        printf ("So tien dien phai tra trong thang do la: %d vnd", sum2);
    }
     else if (num2 - num1 >= 100 && num2 - num1 < 150)
    {
    int sum3 = (num2 - num1) * 20000;
    printf ("So tien dien phai tra trong thang do la: %d vnd", sum3);
    } else if (num2 - num1 >= 150 && num2 - num1 < 200)
    {
    int sum4 = (num2 - num1) * 25000;
    printf ("So tien dien phai tra trong thang do la: %d vnd", sum4);
    } else
    {
    int sum5 = (num2 - num1) * 30000;
    printf ("So tien dien phai tra trong thang do la: %d vnd", sum5);
    }
    return 0;
    }
