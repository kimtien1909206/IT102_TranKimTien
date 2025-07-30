#include <stdio.h>
int main() {
    int number;
    printf("Moi ban nhap vao mot so : ");
    scanf("%d", &number);
    if (number > 0) {
        printf("So: %d la so duong\n", number);
    }
    else {
        printf("So: %d la so am\n", number);
    }
    return 0;
}