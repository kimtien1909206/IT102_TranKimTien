#include <stdio.h>
#include <string.h>
int main (){

    char arr[100] = "Hello world";
    char ch;
    int count = 0;
    printf ("Moi ban nhap vao ki tu bat ki : ");
    scanf ("%c", &ch);
    int length = strlen(arr);
    for ( int i= 0; i < length; i++)
    {
        if ( arr[i] == ch )
        {
            count++;
        }
    }
    printf ("ki tu %c xuat hien : %d", ch, count);
    return 0;
}