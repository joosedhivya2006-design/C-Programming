#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char key;
    scanf("%c",&key);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==key){
            printf("%d",i);
            break;
            return 0;
        }
    }
    printf("-1");
    return 0;
}