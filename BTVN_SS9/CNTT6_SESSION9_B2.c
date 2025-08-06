#include <stdio.h>
int main ()
{
    int arr[] = {10,20,38,47,53};
    int number;
    int found = 0;
    printf ("Moi ban nhap vao mot phan tu : ");
    scanf("%d", &number);
    for (int i = 0 ; i < 5 ; i++)
    {
        if (arr[i] == number)
        {
            printf ("Vi tri cua phan tu trong mang la : %d", i);
            found =1;
            break;
        }
    }
    if (!found)
    {
        printf ("Phan tu khong ton tai trong mang !!!");
    }
    return 0;
}