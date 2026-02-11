#include<stdio.h>
int max(int a,int b){
    int max=0;
    if(a>=b){
        max=a;
    }
    else if(a<b){
        max=b;
    }
    return max;
}
int main(){
    int A,B;
    scanf("%d\n%d",&A,&B);
    int op=max(A,B);
    printf("%d",op);
    return 0;
}