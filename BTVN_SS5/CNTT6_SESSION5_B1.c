#include <stdio.h>
int main ()
{
    int a, b;
    printf ("Moi ban nhap vao hai so nguyen : ");
    scanf ("%d %d", &a, &b);
    if (a > b)
    {
        printf ("So lon hon la: %d ", a);
    }
    else if (a < b)
    {
        printf ("So lon hon la: %d ", b);
    } else
    {
        printf ("hai so bang nhau");
    }
    return 0;
}