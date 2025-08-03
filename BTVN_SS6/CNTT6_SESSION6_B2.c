#include <stdio.h>
int main ()
{
    int num1 = 47;
    int num2;
    while (num1 != num2) {
    printf ("\nMoi ban nhap vao mot so : ");
        scanf ("%d", &num2);
        if (num1 < num2)
        {
            printf ("Lon hon ");
        } else if (num2 > num1)
        {
            printf ("Nho hon ");
        } else
        {
            printf ("Bingo");
        }
    }
    return 0;
}
