#include <stdio.h>
int main ()
{
    int a, b;
    printf (" Moi ban nhap vao hai so nguyen a va b: ");
    scanf ("%d %d", &a, &b);
    if (a == 0)
    {
        if (b == 0)
        {
            printf ("Phuong trinh vo so nghiem");
        } else
        {
            printf ("Phuong trinh vo nghiem");
        }
    } else
    {
        float x = -b/a;
        printf ("Nghiem cua phuong trinh bac nhat la : %.2f", x);
    }
    return 0;
}