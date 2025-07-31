#include <stdio.h>
int main () {
char c;
    printf ("Moi ban nhap vao mot ky tu: ");
    scanf ("%c", &c);
    if ( c >= 65 && c <= 90)
    {
        printf ("Chu thuong tuong ung la : %c", c + 32);
    } else if (c >= 97 && c <= 122)
    {
        printf ("Chu hoa tuong ung la : %c", c - 32);
    } else
    {
        printf ("Khong phai chu cai hop le");
    }
    return 0;
}