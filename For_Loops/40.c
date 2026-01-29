#include<stdio.h>
int main(){
    int n,volt,count=0,min;
    scanf("%d",&n);
    min=volt;
    for(int i=0;i<n;i++){
        scanf("%d",&volt);
        if(min>volt){
            min=volt;
        }
        if(volt<210){
            count++;
        }
    }
    printf("Minimum voltage: %d\n",min);
    printf("Low Voltage Events: %d",count);
    return 0;
}