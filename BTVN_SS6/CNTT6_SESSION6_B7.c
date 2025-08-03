#include <stdio.h>
int main () {
int a, b, UCLN;
    int min ;
    printf (" Moi ban nhap vao hai so a va b : ");
    scanf ( " %f %f", &a, &b);
        if (a < b)
        {
            a = min;
        } else
        {
            b = min;
        }
        for (int i = 1; i <= min; i++)
        {
            if ( a % i == 0 && b % i == 0 )
            {
                UCLN = i;
            }
        }

    printf ("UCLN cua hai so la : %d", UCLN);
    return 0;
}
