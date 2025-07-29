#define PI 3.14
#include <stdio.h>
int main ()
{
    int r;
    printf ("Moi ban nhap ban kinh hinh tron : ");
    scanf ("%d", &r);
    float area = 2 * PI * r;
    float perimeter = PI * r * r;
    printf ("Dien tich hinh tron la: %.2f\n", area);
    printf ("Chu vi hinh tron la: %.2f1", perimeter);
    return 0;
}