#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    char *p=str;
    int len=strlen(str);
    int pallindrome=0;
    char str2[100];
    for(int i=0;i<len;i++){
        if(len>=0){
        str2[i]=str[len-1];}
        len--;
    }
    char *q=str2;
    if((*p>='a' && *p<='z') && (*q>='a' && *q<='z')){    for(int i=0;i<len;i++){
        if(*(p+i)!=*(q+i)){
            pallindrome=0;
            break;
        }
        else{
            pallindrome=1;
        }
    }}
    if(pallindrome==1){
        printf("Yes");}
    else{
        printf("No");
    }
    return 0;
}