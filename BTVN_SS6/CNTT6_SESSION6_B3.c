#include <stdio.h>
int main ()
{
    int n;
    int sum = 0;
    printf(" Moi ban nhap 1 so n bat ki : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf ("tong tu 1 den %d la : %d\n", n, sum);
    return 0;
}
