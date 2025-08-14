#include <stdio.h>
void add(char arr[]) {
    int i = 0;
    while (arr[i] != '\0') {
        i++;
    }
    while (i > 0) {
        i--;
        printf("%c", arr[i]);
    }
}
int main() {
    char str[100];
    printf("Nhap chuoi bat ky: ");
    gets(str);
    printf("Chuoi dao nguoc: ");
    add(str);
    return 0;
}

