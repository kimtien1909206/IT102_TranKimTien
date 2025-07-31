#include <stdio.h>
int main ()
{
    float a, b;
    char pt;
    printf ("Moi ban nhap vao hai so a va b: ");
    scanf ("%f %f", &a, &b);
    printf ("Moi ban nhap vao dau (+,-,*,/) : ");
    scanf ("%c", &pt);
    switch (pt)
    {
    case '+':
        printf ("ket qua cua phep tinh : %.2f + %.2f = %.2f", a, b, a + b);
        break;
    case '-':
        printf ("ket qua cua phep tinh : %.2f - %.2f = %.2f", a, b, a - b);
        break;
    case '*':
        printf ("ket qua cua phep tinh : %.2f * %.2f = %.2f", a, b, a * b);
        break;
    case '/':
        if (b==0)
        {
            printf ("Loi ket qua phep chia khong the chia cho 0");
        } else
        {
            printf ("ket qua cua phep tinh : %.2f / %.2f = %.2f", a, b, a / b);
        }
        break;
    default:
        printf ("Loi phép tinh khong hop le");
        break;
    }
    return 0;
}
