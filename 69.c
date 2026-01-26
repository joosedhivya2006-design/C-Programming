// 69.Number within range
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if(num>=10 && num<=20){
        printf("Number is within range");
    }
    else{
        printf("Number is not within range");
    }

    return 0;
}