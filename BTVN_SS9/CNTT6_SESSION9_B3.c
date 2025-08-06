#include <stdio.h>
int main() {
    int rows, cols;
    int arr[100][100];
    int number = rows;
        number = cols;
    printf("Moi ban nhap vao mot so nguyen: ");
    scanf("%d", &number);
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

