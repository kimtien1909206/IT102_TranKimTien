#include <stdio.h>
#include <string.h>

void inputString(char *s) {
    printf("Nhap vao chuoi: ");
    fflush(stdin);
    fgets(s, 200, stdin);
    s[strcspn(s, "\n")] = '\0';
}

void printReverse(char *s) {
    int len = strlen(s);
    char *p = s + len - 1;
    printf("Chuoi dao nguoc: ");
    while (p >= s) {
        printf("%c", *p);
        p--;
    }
    printf("\n");
}

void countWords(char *s) {
    int count = 0;
    int inWord = 0;
    char *p = s;
    while (*p != '\0') {
        if (*p != ' ' && inWord == 0) {
            inWord = 1;
            count++;
        } else if (*p == ' ') {
            inWord = 0;
        }
        p++;
    }
    printf("So luong tu trong chuoi: %d\n", count);
}

void compareLength(char *s) {
    char other[200];
    printf("Nhap vao chuoi khac: ");
    fflush(stdin);
    fgets(other, 200, stdin);
    other[strcspn(other, "\n")] = '\0';
    if (strlen(other) > strlen(s)) {
        printf("Chuoi vua nhap dai hon chuoi ban dau.\n");
    } else if (strlen(other) < strlen(s)) {
        printf("Chuoi vua nhap ngan hon chuoi ban dau.\n");
    } else {
        printf("Chuoi vua nhap co do dai bang chuoi ban dau.\n");
    }
}

void toUppercase(char *s) {
    char *p = s;
    while (*p != '\0') {
        if (*p >= 'a' && *p <= 'z') {
            *p = *p - 32;
        }
        p++;
    }
    printf("Chuoi in hoa: %s\n", s);
}

void appendString(char *s) {
    char other[200];
    printf("Nhap vao chuoi khac: ");
    fflush(stdin);
    fgets(other, 200, stdin);
    other[strcspn(other, "\n")] = '\0';
    strcat(s, other);
    printf("Chuoi sau khi them: %s\n", s);
}

int main() {
    char str[400] = "";
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. So sanh voi chuoi khac\n");
        printf("5. In hoa tat ca chu cai\n");
        printf("6. Them chuoi khac vao chuoi ban dau\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                inputString(str);
                break;
            case 2:
                printReverse(str);
                break;
            case 3:
                countWords(str);
                break;
            case 4:
                compareLength(str);
                break;
            case 5:
                toUppercase(str);
                break;
            case 6:
                appendString(str);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 7);

    return 0;
}
