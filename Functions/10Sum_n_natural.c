#include<stdio.h>
int sum_natural(int n){
    int    sum=n*(n+1)/2;
    printf("%d",sum);
}
int main(){
    int n;
    scanf("%d",&n);
    int sum=sum_natural(n);
    return 0;
}