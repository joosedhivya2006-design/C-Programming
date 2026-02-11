#include<stdio.h>
int count_digit(int n){
    int count=0;
    while(n!=0){
        int ld=n%10;
        count++;
        n/=10;
    }
    printf("%d",count);
}
int main(){
    int n;
    scanf("%d",&n);
    int op=count_digit(n);
    return 0;
}