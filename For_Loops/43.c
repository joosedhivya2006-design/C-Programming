#include<stdio.h>
int main(){
    int n,hours,sum=0,cost,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&hours);
        sum=sum+hours;
        cost=sum*200;
        if(hours>3){
            count++;
        }
    }
    printf("Total Overtime Hours: %d\n",sum);
    printf("Overtime Cost: %d\n",cost);
    printf("Heavy Overtime Days: %d",count);
    return 0;
}