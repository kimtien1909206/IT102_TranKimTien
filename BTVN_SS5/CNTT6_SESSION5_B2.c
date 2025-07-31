#include <stdio.h>
int main ()
{
    int number;
    printf ("Moi ban nhap diem trung binh: ");
    scanf ("%d", &number);
    if ( number >= 0 )
    {
        if (number >= 8 && number <= 10)
        {
            printf ("Hoc luc gioi", number);
        } else if (number >= 6.5 && number < 8)
        {
            printf ("Hoc luc kha", number);
        } else if (number >= 5 && number < 6.5)
        {
            printf ("Hoc luc trung binh", number);
        } else
        {
            printf ("Hoc luc yeu", number);
        }
    } else
    {
        printf ("Diem khong hop le", number);
    }
    return 0;
}