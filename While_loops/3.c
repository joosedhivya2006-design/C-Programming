#include<stdio.h>
int main(){
    int n,totalData,usage,rem,sum=0,count=0;
    scanf("%d\n%d",&totalData,&n);
    int i=1;
    while(i<=n){
        scanf("%d",&usage);
            sum=sum+usage;
        if(sum<totalData){
            rem=totalData-sum;
            count++;
        }
        i++;
    }
    printf("Days Used: %d\n",count);
    printf("Remaining Data: %d",rem);
    return 0;
}