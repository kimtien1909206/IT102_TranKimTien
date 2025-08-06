#include<stdio.h>
int main ()
{
    int arr[] = {10,20,38,47,53};
    for (int i = 4 ; i >= 0 ; i--)
    {
        printf ("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}