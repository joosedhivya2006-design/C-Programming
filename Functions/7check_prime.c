#include<stdio.h>
int is_prime(int n){
    int is_prime=0;
    if((n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0)||(n==2 ||n==3||n==5||n==7)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int prime=is_prime(n);
    return 0;
}