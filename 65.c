//65.Uppercase or Lowercase
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("Uppercase Letter");
    }
    else if(ch>='a' && ch<='z'){
        printf("Lowercase Letter");
    }
    return 0;
}