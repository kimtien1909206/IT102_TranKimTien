#include <stdio.h>
int main ()
{
    float math;
    float literature;
    float english;
    printf("Moi ban nhap vao diem ba mon : ");
    scanf("%f %f %f", &math &literature, &english);
    float total = math + literature + english;
    float medium = total / 3;
    printf ("Tong diem ba mon la : %.2f ", total);
    printf ("Diem trung binh 3 mon la : %.2f", medium);
    return 0;
}