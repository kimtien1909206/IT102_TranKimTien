#include <stdio.h>
int main ()
{
    int celsius;
    printf ("Moi nguoi dung nhap vao celsius: ");
    scanf("%d", &celsius);
    int ahrenheit = celsius * 9/5 + 32;
    printf("Ket qua: %d", ahrenheit);
    return 0;
}
