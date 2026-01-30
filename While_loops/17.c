#include<stdio.h>
int main(){
    int walletBalance,n,amnt,sum=0,count=0,rem;
    scanf("%d %d",&walletBalance,&n);
    while (n>0)
    {
        scanf("%d",&amnt);
        sum=sum+amnt;
        if(sum<=walletBalance){
            count++;
            rem=walletBalance-sum;
        }
        n--;
    }
    printf("Successful Purchase: %d\n",count);
    printf("Final Balance: %d",rem);
    return 0;
}