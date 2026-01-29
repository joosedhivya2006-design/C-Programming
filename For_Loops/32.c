#include<stdio.h>
int main(){
    int n,mm,count=0,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&mm);
        sum=sum+mm;
        if(mm>50){
            count++;
        }
    }
    printf("Total Rainfall: %d\n",sum);
    printf("Heavy Rain Days: %d",count);
    return 0;
}