#include <stdio.h>
int main ()
{
    int day , month, year,  maxDay;
    printf("Moi ban nhap ngay thang nam: ");
    scanf("%d %d %d", &day, &month, &year);

    if (day <= 0 || month <= 0 || year <= 0)
    {
        printf("Ngay thang nam khong hop le");
    }
    else
    {
        if (month > 12)
        {
            printf("Ngay thang nam khong hop le");
        }
        else
        {
            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            {
                maxDay = 31;
            }
            else if (month == 4 || month == 6 || month == 9 || month == 11)
            {
                maxDay = 30;
            }
            else
            {
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                {
                    maxDay = 29;
                }
                else
                {
                    maxDay = 28;
                }
            }
            if (day > maxDay)
            {
                printf("Ngay thang nam khong hop le");
            }
            else
            {
                printf("Ngay %d %d %d hop le", day, month, year);
            }
        }
    }
    return 0;
}
