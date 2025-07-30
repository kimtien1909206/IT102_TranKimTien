#include <stdio.h>
int main (){
int a;
int b;
int c;
printf ("Moi ban nhap vao 3 so nguyen : ");
scanf (" %d %d %d" , &a, &b, &c);
    if (a <= b && b <= c)
    {
        printf (" Thu tu tang dan la : %d %d %d", a, b, c);
    } else if (a <= c && c <= b)
    {
        printf ("Thu tu tang dan la : %d %d %d", a, c, b );
    } else if (b <= a && a <= c)
    {
        printf ("Thu tu tang dan la : %d %d %d", b, a, c );
    } else if (b <= c && c <= a)
    {
        printf ("Thu tu tang dan la : %d %d %d", b, c, a );
    } else if (c <= a && a <= b)
    {
        printf ("Thu tu tang dan la : %d %d %d", c, a, b );
    } else
    {
        printf ("Thu tu tang dan la : %d %d %d", c, b, a );
    }
    return 0;
}