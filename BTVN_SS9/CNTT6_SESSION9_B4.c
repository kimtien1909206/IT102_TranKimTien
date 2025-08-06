#include <stdio.h>
int main () {

int arr[2][3] ={ {1,2,3},{4,5,6}};
    int maxNumber = arr[0][0];
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++) {
        if (arr[i][j] > maxNumber){
            maxNumber = arr[i][j];
        }
    }
}
    printf("So lon nhat trong mang : %d", maxNumber);
    return 0;
}
