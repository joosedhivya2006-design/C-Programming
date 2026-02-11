#include<stdio.h>
int power(int a,int b){
    int pow=1;
    for(int i=0;i<b;i++){
        pow=pow*a;
    }
    printf("%d",pow);
}
int main(){
    int A,B;
    scanf("%d\n%d",&A,&B);
    int pow=power(A,B);
    return 0;
}