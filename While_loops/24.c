#include<stdio.h>
int main(){
    int fuel,n;
    scanf("%d",&fuel);
    scanf("%d",&n);
    int current_stage=1;
    int used;
    int emergency=-1;
    int wasted=0;
    int temp=fuel;
    while(current_stage<=n){
        scanf("%d",&used);
        if(fuel<used){
            emergency=current_stage;
            wasted=used-fuel;
            break;
        }
        fuel-=used;
        current_stage++;
    }
    if(emergency!=-1){
        printf("Emergency Stage: %d\n",emergency);
        printf("Fuel Wasted: %d",wasted);
    }
    else{
        printf("Emergency Stage: Not Occured");
        printf("Fuel Wasted: 0");
    }
    return 0;
}