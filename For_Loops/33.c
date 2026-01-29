#include<stdio.h>
int main(){
    int n,h_loss,count=0,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&h_loss);
        sum=sum+h_loss;
        if(h_loss<100){
            count++;
        }
    }
    printf("Total Loss: %d\n",sum);
    printf("High loss Days: %d",count);
    return 0;
}