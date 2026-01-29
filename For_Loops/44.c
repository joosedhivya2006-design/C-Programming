#include<stdio.h>
int main(){
    int n,level,count=0,max=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&level);
        if(max<level){
            max=level;
        }
        if(level>70){
            count++;
        }
    }
    printf("Maximum Noise: %d\n",max);
    printf("Noisy Periods: %d",count);
    return 0;
}