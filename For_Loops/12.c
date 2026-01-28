#include<stdio.h>
int main(){
    int n,pow,count,result;
    pow=1;
    scanf("%d %d",&n,&count);
    for (int i=1;i<=count;i++)
    {
        pow=pow*n;   
    }
    printf("%d",pow);
    return 0;
}