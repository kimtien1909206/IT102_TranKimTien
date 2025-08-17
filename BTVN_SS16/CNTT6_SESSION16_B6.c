#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello world";
    int count = 0;
    int ch = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && ch == 0) {
            ch = 1;
            count++;
        } else if (str[i] == ' ') {
            ch = 0;
        }
    }

    int length = strlen (str);
    printf ("Chuoi ki tu gom : %d ki tu\n", length);
    printf("So tu trong chuoi: %d\n", count);
    return 0;
}
