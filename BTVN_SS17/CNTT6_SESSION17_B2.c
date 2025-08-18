#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100];
    int choice;

    printf ("===Menu===");
    printf ("1, chuyen thanh chu hoa ");
    printf ("2, chuyen thanh chu thuong ");
    printf ("Moi ban nhap lua chon :");
    scanf (" %d", &choice);
    printf ("Moi ban nhap mot chuoi ki tu: ");
    fgets (str,sizeof (str), stdin);
    str[strcspn(str, "\n")] = '\0';
    if (choice == 1)
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
        printf ("chuoi sau khi chuyen doi la : %s\n", str);
    }   else if (choice == 2)
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
        }
        printf ("Chuoi sau khi chuyen doi la : %s\n", str);
    } else
    {
        printf ("chuoi nhap khong hop le");
    }
    return 0;
}
