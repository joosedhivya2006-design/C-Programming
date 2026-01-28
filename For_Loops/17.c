#include<stdio.h>
int main(){
    int n,sum,fact,ld,temp;
    scanf("%d",&n);
    sum=0;
    fact=1;
    temp=n;
    for( ;n!=0;n/=10){
        ld=n%10;
        for(int j=1;j<=ld;j++){
            fact=fact*j;
        }
        sum=sum+fact; 
        fact=1;
    }
    
    if(sum==temp){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}