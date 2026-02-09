#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int count=0;
    int max=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
            if(count>max){
                max=count;
            }
        }
        else{
            count=0;
        }
    }
    if(max){
        printf("%d",max);
        }
    else{
        printf("%d",max);
    }
    return 0;
}