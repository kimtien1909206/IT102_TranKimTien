#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, check = 1;
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    i = 0;
    j = strlen(str) - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            check = 0;
            break;
        }
        i++;
        j--;
    }
    if (check == 1)
        printf("La palindrome\n");
    else
        printf("Khong phai palindrome\n");

    return 0;
}

