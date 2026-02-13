#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char *p=str;
    char str2[100]="\0";
    char *q=str2;
    while(*p!='\0'){
        *q=*(p);
        p++;
        printf("%c",*q);
    }
    return 0;
}