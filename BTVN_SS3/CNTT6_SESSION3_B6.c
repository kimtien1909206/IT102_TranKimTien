#include <stdio.h>
int main ()
{
    int length;
    int height;
    printf ("do dai canh tam giac: ");
    scanf ("%d", &length);
    printf ("chieu cao cua tam giac: ");
    scanf ("%d", &height);
    float area = (float) 1/2 * (length * height);
    printf ("Dien tich cua tam giac: %.2f", area);
    return 0;
}
