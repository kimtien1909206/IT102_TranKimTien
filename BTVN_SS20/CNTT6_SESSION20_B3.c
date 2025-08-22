#include <stdio.h>
struct student
{
    char name[100];
    int age;
    char phoneNumber[50];
};
int main ()
{
    struct student student1[5];

    for (int i = 0; i < 5; i++)
    {
        printf ("Moi ban nhap thong tin sinh vien: \n");
        printf ("Moi ban nhap ten sinh vien : ");
        fgets (student1[i].name, 100, stdin);
        printf ("Moi ban nhap tuoi sinh vien : ");
        scanf ("%d", &student1[i].age);
        getchar();
        printf ("Moi ban nhap SDT : ");
        fgets (student1[i].phoneNumber, 50, stdin);

    }
    for (int i = 0; i < 5; i++)
    {
        printf ("Ten sinh vien la : %s\n", student1[i].name);
        printf ("Tuoi sinh vien la : %d\n ", student1[i].age);
        printf ("SDT sinh vien la : %s\n", student1[i].phoneNumber);
    }
    return 0;
}
