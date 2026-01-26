// 70.Electricity bill
#include <stdio.h>

int main() {
    int units,bill;
    int rate1=4,rate2=5;
    scanf("%d",&units);
    if(units<=100){
        bill=units*rate1;
    }
    else{
        bill=(100*rate1)+((units-100)*rate2);
    }
    printf("Bill amount = Rs. %d",bill);
    

    return 0;
}