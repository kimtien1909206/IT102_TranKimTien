#include <stdio.h>
int main (){
int n;
int even = 0, odd = 0;
printf ("Moi ban nhap vao mot so : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
    if ( i % 2 == 0)
    {
        even++;
    } else
    {
        odd++;
    }
    }
    printf ("Co %d so chan\n", even);
    printf ("Co %d so le", odd);
return 0;
}