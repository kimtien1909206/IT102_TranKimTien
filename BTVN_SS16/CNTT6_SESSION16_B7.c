#include <stdio.h>
#include<string.h>
int main ()
{
    char arr[100] = "Hello my gmail is test123@gmail.com";
    int number = 0, ch = 0, kt = 0;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
        {
            number++;
        } else if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
        {
            ch++;
        } else
        {
            kt++;
        }

    }
    printf ("Co tat ca %d chu so\n", number);
    printf ("co tat ca %d chu cai\n", ch);
    printf ("co tat ca %d ki tu dac biet\n", kt);
    return 0;
}
