#include<stdio.h>
int main(){
    int n,days,total;
    total=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&days);
        total=total+days;
    }
    printf("Total Units: %d",total);
    return 0;
}