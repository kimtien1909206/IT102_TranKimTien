#include <stdio.h>
#include <string.h>
int main (){
char arr[100] = "Hello world";
for ( int i= 0; i < strlen(arr); i++)
{
    printf ("%c ", arr[i]);
}
return 0;
}
