#include <stdio.h>
int main ()
{
    float a, b;
    int choice;
    printf ( "Moi ban nhap vao hai so a, b bat ki : ");
    scanf (" %f %f", a, b);
    printf (" CALCULATOR");
    printf ("1. Tong hai so");
    printf ("2. Hieu hai so ");
    printf ( "3. Tich hai so ");
    printf ( "4. Thuong hai so ");
    printf ( "5. Thoat");
    printf ("Moi ban nhap chon (1-5) : ");
    scanf ("%d", &choice);
    switch (choice){
    case 1:
    printf ( "Tong cua hai so %f va %f la : %.0f ", a, b, a + b);
    break;
    case 2:
    printf ("Hieu cua hai so %f va %f la : %f", a ,b, a - b);
    break;
    case 3:
    printf ("Tich cua hai so %f va %f la : %f", a, b, a * b);
    break;
    case 4:
    if (b == 0)
    {
        printf (" phep tinh khong hop he !!!");
    } else
    {
        printf (" Thuong cua hai so %f va %f la : %f",a , b , a / b);
    }
    break;
    case 5:
    printf ("Thoat chuong trinh!");
    break;
    default:
    printf (" Lua chon khong hop le");
} while (choice != 5);
return 0;
}



