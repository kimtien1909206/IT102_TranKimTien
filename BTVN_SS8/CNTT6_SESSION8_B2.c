#include <stdio.h>
int main ()
{
    int arr[5];
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        printf ("arr[%d] = ",i);
        scanf ("%d", &arr[i]);
    }
    for (int i; i < sizeof(arr)/sizeof(int); i++)
    {
        printf ("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;

}
