#include<stdio.h>
int tables(int n){
    for(int i=1;i<=10;i++){
        int product=n*i;
        printf("%d x %d = %d\n",n,i,product);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int product=tables(n);
    return 0;
}