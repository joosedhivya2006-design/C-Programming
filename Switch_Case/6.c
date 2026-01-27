#include<stdio.h>
int main(){
    int orderAmount,speedType,d_amnt;
    scanf("%d %d",&orderAmount,&speedType);
    switch(speedType){
        case 1:
            d_amnt=50;
            printf("Delivery $%d",d_amnt);
            break;
        case 2:
            if(orderAmount<1000){
                d_amnt=100;
                printf("Delivery $%d",d_amnt);
            }
            if(orderAmount>=1000){
                printf("Delivery Free");
            }
    }
    return 0;
}
