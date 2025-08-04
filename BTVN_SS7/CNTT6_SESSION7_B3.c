#include <stdio.h>
int main (){
    int n;
    int reversed = 0, original;
    printf ("Moi ban nhap vao mot so : ");
    scanf ("%d", &n);
    if (n <= 0 )
    {
        printf (" So ban nhap khong hop le !!!");
    } else
    {
        original = n;
        while (n > 0) {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n = n / 10;
        }
        if (original == reversed) {
            printf("%d la so doi xung.\n", original);
        } else {
            printf("%d khong phai la so doi xung.\n", original);
        }
    }
return 0;
}
