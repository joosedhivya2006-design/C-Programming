#include<stdio.h>
int main(){
    int m,n,prod,sum;
    sum=0;
    scanf("%d %d",&m,&n);
    for(int i=1;i<=1000;i++){
        prod=m*i;
        if(prod<=n){
            sum=sum+prod;
        }
    }
    printf("%d",sum);
    return 0;
    
}