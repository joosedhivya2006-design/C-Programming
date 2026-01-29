#include<stdio.h>
int main(){
    int n,expense,total,count;
    scanf("%d",&n);
    total=0;
    count=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&expense);
        total=total+expense;
        if(expense>1000){
            count++;
        }

    }
    printf("Total Expense: %d\n",total);
    printf("Overspend Days: %d",count);
    return 0;
}