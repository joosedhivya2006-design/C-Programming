#include<stdio.h>
int sum_digit(int n){
    int sum=0;
    while(n!=0){
        int ld=n%10;
        sum+=ld;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int op=sum_digit(n);
    printf("%d",op);
    return 0;
}