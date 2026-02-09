#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",&s);
    int count=0,max=0;
    for(int i=0;i<strlen(s);i++){
        for(int j=i;j<strlen(s);j++){
            int unique=1;
            for(int k=i;k<j;k++){
                if(s[j]==s[k]){
                unique=0;
                count=0;
                break;
            }
        }
        if(unique==0){
            count=0;
            break;
        }
        if(unique==1){
            count++;
            if(max<count){
                max=count;
            }
        }
    }
    count=0;
}
    printf("%d",max);
    return 0;
}