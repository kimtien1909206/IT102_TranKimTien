#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main ()
{
    char str1[100], str2[100];
    printf ("Moi ban nhap chuoi thu nhat: ");
    fgets (str1, 100, stdin);
    str1[strcspn(str1,"\n")] = '\0';
    printf ("Moi ban nhap chuoi thu hai: ");
    fgets (str2, 100, stdin);
    str2[strcspn(str2,"\n")] = '\0';
    for (int i = 0; str1[i]; i++) {
        str1[i] = tolower(str1[i]);
    }
    for (int i = 0; str2[i]; i++) {
        str2[i] = tolower(str2[i]);
    }
    if (strcmp(str1, str2) == 0) {
        printf("Giong nhau\n");
    } else {
        printf("Khac nhau\n");
    }
    return 0;
}
