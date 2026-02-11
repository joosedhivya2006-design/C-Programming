#include<stdio.h>
int is_leap(int n){
    if(n%400!=0 && n%100==0){
        printf("Not Leap Year");
    }
    else if(n%400==0 ||n%4==0){
        printf("Leap Year");
    }
    else{
        printf("Not Leap Year");
    }
}
int main(){
    int year;
    scanf("%d",&year);
    int op=is_leap(year);
    return 0;
}