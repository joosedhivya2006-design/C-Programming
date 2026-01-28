#include<stdio.h>
int main(){
    int n,temp,rev,i;
    scanf("%d",&n);
    temp=n;
    rev=0;
    for(;n!=0;n/=10){
        int ld=n%10;
        rev=rev*10+ld;
    }
    printf("%d",rev);
    return 0;
}