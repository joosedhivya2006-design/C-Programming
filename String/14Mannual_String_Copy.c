#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    fgets(str1,sizeof(str1),stdin);
    char str2[100];
    for(int i=0;i<strlen(str1);i++){
        str2[i]=str1[i];
        printf("%c",str2[i]);
    }
    return 0;
}