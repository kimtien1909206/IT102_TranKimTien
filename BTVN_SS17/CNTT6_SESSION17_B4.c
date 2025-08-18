#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch;
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("Chuoi sau khi xoa: %s\n", str);
    return 0;
}

