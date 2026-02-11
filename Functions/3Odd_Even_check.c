#include<stdio.h>
int check(int n ){
    if(n%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int op=check(n);
    return 0;
}