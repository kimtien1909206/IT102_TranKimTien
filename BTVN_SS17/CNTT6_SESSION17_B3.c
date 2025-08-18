#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[100] , str2[100];
    printf ("Moi ban nhap chuoi ki tu thu nhat: ");
    fgets (str1, sizeof (str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf ("Moi ban nhap chuoi ki tu thu hai: ");
    fgets (str2, sizeof (str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    strcat (str1, str2);
    printf ("chuoi sau khi duoc noi lai la : %s\n", str1);
    return 0;
}
