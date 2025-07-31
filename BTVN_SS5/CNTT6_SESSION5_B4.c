#include <stdio.h>
int main () {
    int number;
    printf ("Moi ban nhap vao muc thu nhap 1 thang : ");
    scanf ("%d", &number);
    if (number > 0  && number <= 5)
    {
        float tax = number * (5/100);
        printf ("So tien thue phai dong trong 1 thang la : %.2f trieu dong", tax);
    }  else if (number > 5 && number <= 10)
    {
       float tax = number * (10/100);
        printf ("So tien thue phai dong trong 1 thang la : %.2f trieu dong", tax);
    }   else
    {
        float tax = number * (15/100);
        printf ("So tien thue phai dong trong 1 thang la : %.2f trieu dong ", tax);
    }
return 0;
}
