#include <stdio.h>
int main ()
{
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 || i == 2 || j == 0 || j == 3)
            {
                sum += arr[i][j];

            }
        }
    }
    printf ("Tong cua bien mang 2 chieu la : %d", sum);
return 0 ;
}
