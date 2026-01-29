#include<stdio.h>
int main(){
    int n,amnt,total;
    total=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&amnt);
        total=total+amnt;
    }
    if(total>10000){
        printf("Limit Exceeded");
    }
    else{
        printf("Approved");
    }
    return 0;
}