#include <stdio.h>
#include <string.h>
int main(){

    char A[100],B[100];
    printf("Nhap chuoi A: ");
    fgets(A,sizeof(A),stdin);
    A[strcspn(A,"\n")]='\0';

    printf("Nhap chuoi B: ");
    fgets(B,sizeof(B),stdin);
    B[strcspn(B,"\n")]='\0';
    if(strstr(A,B)!=NULL)
    {
        printf("Co");
    }
    else
    {
        printf("Khong");
    }
    return 0;
}

