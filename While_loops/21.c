#include<stdio.h>
int main(){
    int n,congestion,count=0,sum=0,min=congestion;
    scanf("%d",&n);
    int max1=0,max2=0;
    min=congestion;
    while(n>0){
        scanf("%d",&congestion);
        if(congestion>20){
            sum++;
        }
        if(max1<congestion && congestion>20){
            max1=congestion;
            count++;
            if(max2<count){
                max2=count;
            }}
        else{
            count=0;
            max1=0;
        }
        n--;
    }
    printf("Congestion Minutes: %d\n",sum);
    printf("Longest Congestion Streak: %d",max2);
    return 0;
}