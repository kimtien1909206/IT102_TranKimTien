#include <stdio.h>
struct student
{
    char name [100];
    int age;
    char phoneNumber[50];
};
int main () {
    struct student student1;
    student1.age = 18;
    snprintf(student1.name, sizeof(student1.name),"Tran Kim Tien" );
    snprintf(student1.phoneNumber, sizeof(student1.phoneNumber),"0353939032" );
    printf ("Ten cua ban la : %s\n", student1.name);
    printf ("Tuoi cua ban la : %d\n", student1.age);
    printf ("SDT cua ban la : %s\n", student1.phoneNumber);
    return 0;
}
