#include<stdio.h>
int main(){
    int n;
    int count=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}