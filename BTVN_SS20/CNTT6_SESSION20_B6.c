#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct Student students[50] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Tran Thi B", 21, "0987654321"},
        {3, "Le Van C", 19, "0911222333"},
        {4, "Pham Thi D", 22, "0909998888"},
        {5, "Hoang Van E", 20, "0933444555"}
    };
    int n = 5;
    struct Student newStudent;
    printf("Nhap thong tin sinh vien moi:\n");
    printf("ID: ");
    scanf("%d", &newStudent.id);
    getchar();
    printf("Ten: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';
    printf("Tuoi: ");
    scanf("%d", &newStudent.age);
    getchar();
    printf("So dien thoai: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = '\0';
    students[n] = newStudent;
    n++;
    for (int i = 0; i < n; i++) {
        printf("ID: %d , Ten: %s , Tuoi: %d ,SDT: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
    return 0;
}

