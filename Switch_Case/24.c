#include<stdio.h>
int main(){
    int minutes,type,bill;
    scanf("%d %d",&type,&minutes);
    switch (type)
    {
    case 1:
        bill=minutes;
        printf("Call Charge ₹ %d",bill);
        break;
    case 2:
        bill=3*minutes;
        printf("Call Charge ₹ %d",bill);
        break;
    case 3:
        bill=10*minutes;
        printf("Call Charge ₹ %d",bill);
    
    default:
        break;
    }
    return 0;
}