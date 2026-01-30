#include<stdio.h>
int main(){
    int n,violation,count=0,sum=0,min=violation;
    scanf("%d",&n);
    int max1=0,max2=0;
    min=violation;
    while(n>0){
        scanf("%d",&violation);
        if(violation>70){
            sum++;
        }
        if(max1<violation && violation>70){
            max1=violation;
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
    printf("Noise Violations: %d\n",sum);
    printf("Longest Violation Streak: %d",max2);
    return 0;
}
