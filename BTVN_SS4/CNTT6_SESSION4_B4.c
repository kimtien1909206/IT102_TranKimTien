#include <stdio.h>
int main ()
{
    int number;
    printf("Moi ban nhap vao mot thang trong nam : ");
    scanf("%d", &number);
    if ( number > 0 && number <= 12 )
    {
        if ( number == 1 && number == 3 && number == 5 && number == 7 && number == 8 && number == 10 && number == 12 )
        {
            printf ("Thang %d co 31 ngay", number);
        } else if (number == 2)
        {
            printf ("Thang %d co 28 hoac 29 ngay", number);
        } else
        {
            printf ("Thang %d co 30 ngay", number);
        }
    } else
    {
        printf ("Thang ban nhap khong hop le" ,number);
    }
    return 0;
}
