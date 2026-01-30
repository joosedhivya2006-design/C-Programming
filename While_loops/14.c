#include<stdio.h>
int main(){
    int init,n,withdraw,sum=0,rem,count=0;
    scanf("%d",&init);
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&withdraw);
        sum=sum+withdraw;
        if(sum<=init){
            count++;
            rem=init-sum;
        }
        i++;
    }
    printf("Successful Withdrawals: %d\n",count);
    printf("Remaining Cash: %d",rem);
    return 0;
}