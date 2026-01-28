#include<stdio.h>
int main(){
    int n,count;
    scanf("%d",&n);
    count=0;
    for ( ;n!=0; n/=10)
    {
        int ld=n%10;
        count++;
    }
    printf("%d",count);
    return 0;
}