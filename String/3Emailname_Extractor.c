#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='@';i++){
        printf("%c",str[i]);
    }
    return 0;
}