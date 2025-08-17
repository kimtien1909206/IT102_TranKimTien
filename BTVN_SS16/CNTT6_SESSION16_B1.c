#include <stdio.h>
#include <string.h>
int main () {
char arr[100];
printf ("Moi ban nhap vao chuoi ki tu can kiem tra : ");
    fgets(arr, sizeof(arr),stdin);
    arr[strcspn(arr, "\n")] = '\0';
    printf ("Chuoi vua nhap la : %s", arr );
    int length = strlen (arr);
    printf ("Chuoi ki tu gom : %d ki tu\n", length);
    return 0;
}
