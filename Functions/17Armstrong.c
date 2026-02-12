#include<stdio.h>
int armstrong(int n){
    int temp=n;
    int sum=0;
    while(n!=0){
        int ld=n%10;
        int pow=1;
        for(int i=0;i<3;i++){
            pow=pow*ld;
        }
        sum+=pow;
        n/=10;
    }
    if(temp==sum){
            printf("Armstrong");
        }
    else{
            printf("Not Armstrong");
        }
}
int main(){
    int n;
    scanf("%d",&n);
    int a=armstrong(n);
    return 0;
}