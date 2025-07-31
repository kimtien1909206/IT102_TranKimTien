#include <stdio.h>
int main()
{
    int age;
    float money;
    printf("Moi ban nhap vao tuoi cua minh: ");
    scanf("%d", &age);
    if ( age < 0 || age > 100)
    {
        printf ("So tuoi ban nhap khong hop le", age);
    } else
    {
        if (age < 6)
        {
            printf ("Ban duoc mien phi ve xe");
        } else if ( age >= 6 && age < 19 )
        {
            money = 20000 * (50/100);
            printf ("So tien ve xe bus cua ban la : %.2f VND ", money);
        } else if (age >= 19 && age <= 60 )
        {
            money = 20000 * (100/100);
            printf ("So tien ve xe bus cua ban la : %.2f VND", money);
        } else
        {
            money = 20000 * (70/100);
            printf ("So tien ve xe bus cua ban la : %.2f VND", money);
        }
    }
    return 0;
}
