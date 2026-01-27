#include<stdio.h>
int main(){
    int input,units,rate1,rate2,rate3,rate4,rate5,bill;
    rate1=3;rate2=5;rate3=7;
    rate4=7;rate5=10;
    scanf("%d %d",&input,&units);
    switch(input){
    case 1:
        if(units>=0 && units<=100){
            bill=rate1*units;
            printf("%d",bill);
        }
        else if(units>100 && units<=200){
            bill=bill=((rate1*100)+(units-100)*rate2)-80;
            printf("%d",bill);
        }
        else if(units>200 && units<=1000){
            bill=((rate1*100)+(units-200)*rate2+(units-100)*rate3)-80;
            printf("%d",bill);
        }
        break;
    case 2:
        if(units>=0 && units<=100){
            bill=rate4*units;
            printf("%d",bill);
        }
        else if(units>100){
            bill=((rate4*100)+(units-100)*rate5);
            printf("%d",bill);
        }
        break;
    default:
        printf("1-Domestic\n2-Commercial");

    }
    return 0;
}
