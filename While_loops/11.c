#include<stdio.h>
int main(){
    int n,delay,sum=0,count=0;
    scanf("%d",&n);
    int i=1;
    while (i<=n)
    {
        scanf("%d",&delay);
        sum=sum+delay;
        if(delay>2){
            count++;
        }
        i++;
    }
    printf("Total Delay: %d\n",sum);
    printf("Delayed Days: %d",count);
    return 0;
    
}