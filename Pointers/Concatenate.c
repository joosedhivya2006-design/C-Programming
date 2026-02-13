#include<stdio.h>
#include<string.h>
int main(){
    char str1[50];
    scanf("%s",str1);
    char str2[50];
    scanf("%s",&str2);
    char *p=str1;
    char *q=str2;
    char str[100];
    int i;
    for(i=0;*p!='\0';i++){
        str[i]=*p;
        p++;
    }
    int j;
    for(j=i;*q!='\0';j++){
        str[j]=*q;
        q++;
    }
    str[j]='\0';
    printf("%s",str);
    return 0;
}