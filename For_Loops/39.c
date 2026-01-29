#include<stdio.h>
int main(){
    int n,revenue,total=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&revenue);
        total=total+revenue;
        if(revenue>50000){
            count++;
        }
    }
    printf("Toatal data: %d\n",total);
    printf("High Usage Days: %d",count);
    return 0;
}