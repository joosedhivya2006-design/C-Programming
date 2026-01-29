#include<stdio.h>
int main(){
    int n,usage,total=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&usage);
        total=total+usage;
        if(usage>2){
            count++;
        }
    }
    printf("Toatal data: %d\n",total);
    printf("High Usage Days: %d",count);
    return 0;
}