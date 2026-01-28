#include<stdio.h>
int main(){
    int n,a,b,temp;
    scanf("%d",&n);
    a=0;
    b=1;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        temp=a;
        a=a+b;
        b=temp;
    }
    return 0;
}