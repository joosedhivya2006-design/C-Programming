#include<stdio.h>
int main(){
    int n,order,sucessful=1,cancelled=0,c1=0,c2=0;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&order);
        if(order==sucessful){
            c1++;
        }
        else if(order==cancelled){
            c2++;
        }
        i++;
    }
    printf("Successful: %d\n",c1);
    printf("Cancelled: %d\n",c2);
    if(c1<c2){
        printf("Status: Risk");
    }
    else{
        printf("Status: Safe");
    }
    return 0;
}