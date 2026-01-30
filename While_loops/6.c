#include<stdio.h>
int main(){
    int maxWeight,n,elements,count=0,sum=0;
    scanf("%d %d",&maxWeight,&n);
    int i=1;
    while(i<=n){
        scanf("%d",&elements);
        sum=sum+elements;
        if(sum<=maxWeight){
            count++;
        }
        i++;
    }
    printf("Passengers Allowed: %d\n",count);
    if(sum>maxWeight){
        printf("Overload: Yes");
    }
    else{
        printf("Overload: No");
    }
    return 0;
}