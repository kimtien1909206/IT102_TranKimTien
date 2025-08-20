#include <stdio.h>
int main ()
{
    int number = 10;
    int *numberPtr= &number;
    printf ("Gia tri cua bien la : %d\n", number);
    printf ("Dia chi cua bien la : %lu\n", &number);
    printf ("Gia tri cua bien khi dung con tro: %d\n", *numberPtr);
    printf ("Dia chi cua bien bien khi dung con tro : %lu\n", numberPtr);
    return 0;
}
