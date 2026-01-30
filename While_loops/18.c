#include<stdio.h>
int main(){
    int capacity,n,hour_load,count=0,sum,temp;
    scanf("%d %d",&capacity,&n);
    temp=n;
    while(n>0){
        scanf("%d",&hour_load);
        if(hour_load>capacity){
            count++;
        }
        n--;
    }
    sum=temp-count;
    printf("Safe Hours: %d\n",sum);
    printf("Failure Count: %d",count);
    return 0;
}