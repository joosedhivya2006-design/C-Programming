#include<stdio.h>
int main(){
    int n,delay,sum=0,count=0;
    sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&delay);
        sum=sum+delay;
        if(delay>30){
            count++;
        }
    }
    printf("Total Delay: %d\n",sum);
    printf("Delayed Deliveries: %d",count);
    return 0;
}