#include <stdio.h>
int main ()
{
    int arr[] = {3,5,7,9,10};
    for (int i=0 ; i < 5; i++){
    if (arr[i] % 2 == 0)
    {
        printf ("%d", arr[i]);
    }
    }
    return 0;
}
