#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char *p=str;
    int count=1;
    for(int i=0;i<strlen(str);i++){
        if(*(p+i)==' '){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}