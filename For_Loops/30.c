#include<stdio.h>
int main(){
    int t_percent,n,total,sum=0,drained;
    scanf("%d %d",&t_percent,&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&drained);
        sum=sum+drained;
    }
    t_percent=t_percent-sum;
    printf("Remaining Battery: %d",t_percent);
    return 0;
}