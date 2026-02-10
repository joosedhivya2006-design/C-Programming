#include<stdio.h>
#include<string.h>
int main(){
char str[100];
fgets(str,sizeof(str),stdin);
int is_Uppercase=0;
for(int i=0;str[i]!=0;i++){
    if(str[i]>='A'  && str[i]<='Z'){
        is_Uppercase=1;
    }
}
if(is_Uppercase){
    printf("Valid");
}
else{
    printf("Invalid");
}
return 0;
}
