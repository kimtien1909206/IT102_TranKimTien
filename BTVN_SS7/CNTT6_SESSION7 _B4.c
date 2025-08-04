#include <stdio.h>
int main ()
{
    int m, n;
    printf ("Moi ban nhap vao chieu dai hcn: ");
    scanf("%d", &m);
    printf ("Moi ban nhap vao chieu rong hcn : ");
    scanf("%d", &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf ("*");
        }
        printf ("\n");
    }
    return 0;
}

