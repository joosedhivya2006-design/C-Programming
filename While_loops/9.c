#include<stdio.h>
int main(){
    int fuel,n,fuel_trip,sum=0,count=0,rem;
    scanf("%d %d",&fuel,&n);
    int i=1;
    while(i<=n){
        scanf("%d",&fuel_trip);
        sum=sum+fuel_trip;
        if(sum<=fuel){
            rem=fuel-sum;
            count++;
        }
        i++;
    }
    printf("Completed Trips: %d\n",count);
    printf("Remaining Fuel: %d",rem);
    return 0;
}