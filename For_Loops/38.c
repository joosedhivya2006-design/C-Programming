#include<stdio.h>
int main(){
    int n,errors,total=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&errors);
        total=total+errors;
        if(errors>50){
            count++;
        }
    }
    printf("Total Errors: %d\n",total);
    printf("Critical Hours: %d",count);
    return 0;
}