#include <stdio.h>
#include <string.h>

void inputString(char *s) {
    printf("Nhap vao chuoi: ");
    fflush(stdin);
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0';
}

void printString(char *s) {
    printf("Chuoi: %s\n", s);
}

void countLetters(char *s) {
    int count = 0;
    char *p = s;
    while (*p != '\0') {
        if ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z')) {
            count++;
        }
        p++;
    }
    printf("So luong chu cai: %d\n", count);
}

void countDigits(char *s) {
    int count = 0;
    char *p = s;
    while (*p != '\0') {
        if (*p >= '0' && *p <= '9') {
            count++;
        }
        p++;
    }
    printf("So luong chu so: %d\n", count);
}

void countSpecialChars(char *s) {
    int count = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (!((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9') || s[i] == ' ')) {
            count++;
              }
    }
    printf("So luong ky tu dac biet: %d\n", count);
}
int main() {
    char str[100] = "";
    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai\n");
        printf("4. Dem so luong chu so\n");
        printf("5. Dem so luong ky tu dac biet\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1:
                inputString(str);
                break;
            case 2:
                printString(str);
                break;
            case 3:
                countLetters(str);
                break;
            case 4:
                countDigits(str);
                break;
            case 5:
                countSpecialChars(str);
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 6);
    return 0;
}
