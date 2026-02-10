#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    fgets(s,sizeof(s),stdin);
    int length=-1;
    int i=0;
    while(s[i]!='\0'){
        length++;
        i++;
    }
    printf("%d",length);
    return 0;
}