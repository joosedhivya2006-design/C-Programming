//60. Multiple of 3 and 7
#include <stdio.h>

int main() {
    int number;
    scanf("%d",&number);
    if(number%3==0 && number%7==0){
        printf("Multiple of both 3 and 7");
    }
    else{
        printf("Not Multiple of both 3 and 7");
    }

    return 0;
}