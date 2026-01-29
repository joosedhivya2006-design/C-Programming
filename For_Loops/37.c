#include<stdio.h>
#include<math.h>
int main(){
    int n,price,max,count=0;
    scanf("%d",&n);
    max=0;
    for(int i=0;i<n;i++){
        scanf("%d",&price);
        if(max<price){
            max=price;}
        if(price>100){
            count++;
        }
    }
    printf("Highest price: %d\n",max);
    printf("High Price Days: %d",count);
    return 0;
}