#include <stdio.h>
int main ()
{
    int number;
    printf("Moi ban nhap vao mot so nguyen : ");
    scanf("%d", &number);
    if (number % 3 == 0 && number % 5 == 0)
    {
        printf("So: %d la so chia het cho ca 3 va 5\n", number);
    } else
    {
        printf("So: %d la so khong chia het cho ca 3 va 5\n", number);
    }
    return 0;
}