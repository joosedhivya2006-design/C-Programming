#include<stdio.h>
int main(){
    int maxWeight,n,person_weight,sum=0,count;
    scanf("%d %d",&maxWeight,&n);
    while(n>0){
        scanf("%d",&person_weight);
        sum=sum+person_weight;
        if(sum<=maxWeight){
            count++;
        }
        n--;
    }
    printf("People Entered: %d\n",count);
    if(sum>maxWeight){
        printf("Overload Status: Yes");
    }
    else{
        printf("Overload Status: No");
    }
    return 0;
}