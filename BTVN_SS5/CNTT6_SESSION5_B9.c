#include <stdio.h>
int main ()
{
    float salaryCoefficient;
    int workingDay, position;
    float allowance =0,reward =0, wage =0;
    printf ("Moi ban nhap vao he so luong : ");
    scanf ("%f", &salaryCoefficient);
    printf ("Moi ban nhap vao so ngay cong trong thang :");
    scanf ("%d", &workingDay);
    printf ("Moi ban nhap vao chuc vu (1-nhan vien, 2-to truong, 3-quan ly) :");
    scanf ("%d", &position);
    switch (position)
    {
    case 1 :
        allowance = 500000;
        break;
    case 2 :
        allowance = 1000000;
        break;
    case 3 :
        allowance = 2000000;
        break;
    default:
        printf("Chuc vu khong hop le!\n");
        return 0;
    }
    if ( workingDay > 26)
    {
        reward = (workingDay - 26) * 200000;
    }
    wage = workingDay * 160000 * salaryCoefficient + allowance + reward;
    printf ("Luong mot thang nhan duoc la : %.0f", wage);
    return 0;
}
