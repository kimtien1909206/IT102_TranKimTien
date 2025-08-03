#include <stdio.h>
int main() {
    int a, b;
    printf("Moi ban nhap hai so nguyen duong: ");
    scanf("%d %d", &a, &b);
    if(a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
    } else {
        int max;
        if(a > b) {
            max = a;
        } else {
            max = b;
        }
        for(int i = max; ; i++) {
            if(i % a == 0 && i % b == 0) {
                printf("BCNN : %d\n", i);
                break;
            }
        }
    }
    return 0;
}

