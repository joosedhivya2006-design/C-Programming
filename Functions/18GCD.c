#include<stdio.h>
int gcd(int a,int b){
    int g=1;
    int min=(a<b)?a:b;
    for(int i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
            g=i;
        }
    }
    return g;
}
int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    int op=gcd(A,B);
    printf("%d",op);
    return 0;
}