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
    int idToEdit;
    printf("Nhap id sinh vien muon sua: ");
    scanf("%d", &idToEdit);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].id == idToEdit) {
            found = 1;
            printf("Sinh vien tim thay: %s - %d tuoi - SDT: %s\n",
                   students[i].name, students[i].age, students[i].phoneNumber);
            printf("Nhap ten moi: ");
            getchar();
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0';
            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);
            printf("Da cap nhat thong tin!\n");
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien co id = %d\n", idToEdit);
    }
    for (int i = 0; i < n; i++) {
        printf("ID: %d , Ten: %s , Tuoi: %d , SDT: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
    return 0;
}

