#include <stdio.h>
int search(char *str, char x) {
    for (int i = 0; *(str + i) != '\0'; i++) {
        if (*(str + i) == x) {
            return i;
        }
    }
    return 1;
}
int main() {
    char str[] = "Hello world";
    char x;
    printf("Chuoi la: %s\n", str);
    printf("Nhap ky tu can tim: ");
    scanf("%c", &x);
    int number = search(str, x);
    if (number != -1)
        printf("Ky tu '%c' xuat hien tai vi tri %d trong chuoi.\n", x, number);
    else
        printf("Khong tim thay ky tu '%c' trong chuoi.\n", x);

    return 0;
}

