#include<stdio.h>
int main(){
    int n,attempt,count=0,count1=0,count2=0,max=0,total=0,sum=0,index=0;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&attempt);
        if(attempt==0){
            count++;
        }
        count2++;
        if(attempt==0){
            count1++;
            if(max<count1){
                max=count1;
                if(max==3){
                    index=count2;
                }
            }            
        }
        else if(attempt==1){
            count1=0;

        }
        
        i++;
    }
    if(index>0){
        printf("Lock Triggered At Attempt: %d\n",index);
        
    }
    else{
        printf("Lock Triggered At Attempt: Not Locked\n");
    }
    printf("Total Failed Attempts: %d",count);
    return 0;
}