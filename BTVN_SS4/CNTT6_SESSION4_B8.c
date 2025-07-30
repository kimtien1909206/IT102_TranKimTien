#include <stdio.h>
int main () {
int a;
int b;
int c;
    printf ("Moi ban nhap vao 3 canh: ");
    scanf ("%d %d %d", &a, &b, &c);
    if ( a > 0 && b > 0 && c > 0)
    {
        if (a + b > c && a + c > b && b + c > a)
        {
            printf ("La ba canh cua tam giac");
        } else
        {
            printf ("Khong phai la ba canh cua tam giac");
        }
    } else
    {
        printf ("Khong hop le");
    }

}
