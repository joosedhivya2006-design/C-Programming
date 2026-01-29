#include<stdio.h>
int main(){
    int n,amnt,sum;
    sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&amnt);
        sum=sum+amnt;
    }
    printf("Total Collection: %d",sum);
    return 0;
}