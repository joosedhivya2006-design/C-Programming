//67.Valid Triangle
#include <stdio.h>
int main(){
    int a,b,c,sum;
    scanf("%d ",&a);
    scanf("%d ",&b);
    scanf("%d",&c);
    sum=a+b+c;
    if(sum==180){
        printf("Valid Triangle");
    }
    else{
        printf("Not a Valid Triangle");
    }
    return 0;
}