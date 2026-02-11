#include<stdio.h>
int reverse(int n){
    int temp=n;
    int rev=0;
    while(n!=0){
        int ld=n%10;
        rev=(rev*10)+ld;
        n/=10;
    }
    printf("%d",rev);
}
int main(){
    int n;
    scanf("%d",&n);
    int op=reverse(n);
    return 0;
}