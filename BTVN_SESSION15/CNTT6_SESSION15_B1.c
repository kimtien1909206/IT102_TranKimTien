#include <stdio.h>
int effect(int a, int b) {
    if (a > b)
    {
        return a - b;
    } else
    {
        return b - a;
    }
}
int product( int a, int b )
{
    return a * b;
}
int main ()
{
    int x, y;
    printf ("Moi ban nhap vao so thu nhat:");
    scanf ("%d", &x);
    printf ("Moi ban nhap so thu hai: ");
    scanf ("%d", &y);
    printf ("Hieu cua 2 so la : %d\n", effect(x,y));
    printf ("Tich cua 2 so la : %d\n", product(x,y));
    return 0;
}
