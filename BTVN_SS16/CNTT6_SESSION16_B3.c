#include <stdio.h>
#include <string.h>
int main (){
    char arr[100] = "Hello world";
    int length = strlen(arr);
    for ( int i= length - 1; i >= 0; i--)
    {
        printf ("%c", arr[i]);
    }
    return 0;
}
