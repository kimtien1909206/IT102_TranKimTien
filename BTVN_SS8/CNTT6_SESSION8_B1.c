#include <stdio.h>
int main ()
{
    int arr[] = {2,3,5};
    int length = sizeof(arr)/sizeof(int);
    printf ("Do dai cua mang la : %d\n",length);
    for (int i=0 ; i<length ; i++)
    {
        printf ("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
