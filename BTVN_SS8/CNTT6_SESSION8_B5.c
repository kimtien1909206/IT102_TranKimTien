#include <stdio.h>
int main ()
{
    int arr[] = {1,2,3,4,5};
    int maxNumber = arr[0], minNumber = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > maxNumber)
        {
            maxNumber = arr[i];
        }
        if (arr[i] < minNumber)
        {
            minNumber = arr[i];
        }
    }
    printf ("Phan tu lon nhat trong mang : %d\n", maxNumber);
    printf ("Phan tu nho nhat trong mang : %d\n", minNumber);
    return 0;
}
