#include<stdio.h>
int main(){
    int n,i,ld,count;
    count=0;
    scanf("%d",&n);
    for( ;n!=0;n/=10){
        ld=n%10;
        if(ld%2==0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}