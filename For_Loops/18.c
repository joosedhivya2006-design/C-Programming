#include<stdio.h>
int main(){
    int a,b,gcd=1,min;
    scanf("%d %d",&a,&b);
    if(a<b){
        min=a;
    }
    else{
        min=b;
    }
    for(int i=1;i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    printf("%d",gcd);
    return 0;
}