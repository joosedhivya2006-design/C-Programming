//62.check three digit number
#include <stdio.h>
int main(){
    int input;
    scanf("%d",&input);
    if(input>=100 && input<=999){
        printf("Three-digit number");
    }
    else{printf("Not a Three-digit number");}
    return 0;
}