#include<stdio.h>
int fibonacci(int n){
    int arr[n];
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        int temp=a;
        a=a+b;
        b=temp;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int f=fibonacci(n);
    return 0;
}