#include<stdio.h>
int main(){
    int n,temp,sum;
    //temp=n;
    sum=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}