#include <stdio.h>
struct student
{
    char name [100];
    int age;
    char phoneNumber[50];
};
int main ()
{
    struct student student1;
    printf ("Moi ban nhap ten cua minh : ");
    fgets (student1.name, 100 , stdin);
    printf ("Moi ban nhap tuoi : ");
    scanf ("%d", &student1.age);
    getchar();
    printf ("Moi ban nhap SDT : ");
    fgets (student1.phoneNumber, 50, stdin);
    printf ("Ten cua ban la : %s\n", student1.name);
    printf ("Tuoi cua ban la : %d\n", student1.age);
    printf ("SDT cua ban la: %s\n", student1.phoneNumber);
    return 0;
}