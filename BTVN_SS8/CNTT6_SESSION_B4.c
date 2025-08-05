#include <stdio.h>
int main ()
{
    int arr[100];
    int number;
    printf ("Moi ban nhap vao so phan tu trong mang : ");
    scanf ("%d", &number);
    for (int i = 0; i < number; i++)
    {
        printf ("arr[%d] = \n", i);
        scanf ("%d", &arr[i]);
    }
return 0;
}