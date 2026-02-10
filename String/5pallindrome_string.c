#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int pallindrome=1;
    int n=strlen(str)-1;
    for(int i=0;i<n;i++,n--){
        if(str[i]!=str[n]){
        pallindrome=0;
        break;
    }
    }
    if(pallindrome==0){
        printf("Not Pallindrome");
    }
    else{
        printf("Pallindrome");
    }
    return 0;
}