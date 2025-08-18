#include <stdio.h>
#include <string.h>
int main(){
    char str[100],longs[100];
    int maxLen=0,start=0;
    printf("Nhap vao mot chuoi: ");
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    for(int i=0;i<=n;i++)
    {
        if(str[i]==' '||str[i]=='\n'||str[i]=='\0'){
            int len=i-start;
            if(len>maxLen)
                {
                maxLen=len;
                strncpy(longs,str+start,len);
               longs[len]='\0';
            }
            start=i+1;
        }
    }
    printf("Tu dai nhat: %s\n",longs);
    printf("Do dai: %d\n",maxLen);
    return 0;
}
