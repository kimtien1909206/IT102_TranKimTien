#include <stdio.h>
int main ()
{
    float arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int sum = 0;
    float medium;
    for (int i =0 ; i < 3; i++) {
        for (int j = 0 ; j < 4; j++) {
            sum += arr[i][j];

        }
        }
    medium = (float)sum / (sizeof (arr)/sizeof(arr[0][0]));
    printf ("%.2f", medium);
    return 0 ;
}
