#include<stdio.h>
int main(){
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    int sum[row];
    for(int i=0;i<row;i++){
        sum[i]=0;
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
            sum[i]+=arr[i][j];
        }
    }
    int min=sum[row-1];
    int index=0;
    for(int i=0;i<row;i++){
        if(sum[i]>0 && sum[i]<=sum[i+1]){
            min=sum[i];
            index=i;
        }
    }
    if(index)
        printf("%d",index);
    else printf("No Non-Zero Minimum");
    return 0;
}