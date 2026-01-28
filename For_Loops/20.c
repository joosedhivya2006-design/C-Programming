#include<stdio.h>
int main(){
    int n,sq,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sq=i*i;
        sum=sum+sq;

    }
    printf("%d",sum);
    return 0;
}