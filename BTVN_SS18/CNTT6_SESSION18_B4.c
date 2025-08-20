#include <stdio.h>
void array(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf ("ar%d", *(arr+i));
    }
    printf ("\n");
}
int main ()
{
int arr[10] = {10,20,30,40,50,9,8,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf ("Tat ca cac phan tu trong mang la : ");
    array(arr, size);
    return 0;
}