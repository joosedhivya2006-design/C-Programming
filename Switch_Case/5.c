#include<stdio.h>
int main(){
    int planType,plan1,plan2,pay;
    int paymentMode;
    plan1=199;
    plan2=399;
    scanf("%d %d",&planType,&paymentMode);
    switch(planType){
        case 1:
            if(paymentMode==11 || paymentMode==12){
                pay=plan1-20;
                printf("Pay $ %d",pay);
            }
            else if(paymentMode==13){
                printf("Pay $ %d",plan1);
            }
            break;
        case 2:
            if (paymentMode==11|| paymentMode==12){
                pay=plan2-20;
                printf("Pay $ %d",pay);
            }
            else if(paymentMode==13){
                printf("Pay $ %d",plan2);
            }
            break;          
    }
    return 0;
}