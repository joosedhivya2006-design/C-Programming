#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int odd=1;
    for(int i=1;i<=n;i++){
        for(int k=i;k>=1;k--){
            printf("%d",k%2);
        }
        printf("\n");
        }
    return 0;
}
