#include<stdio.h>
int main(){
    int n,sum;
    scanf("%d",&n);
    sum=0;
    for ( ;n!=0; n/=10)
    {
        int ld=n%10;
        sum=sum+ld;
    }
    printf("%d",sum);
    return 0;
}