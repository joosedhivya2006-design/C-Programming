#include<stdio.h>
int main(){
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    int sum[column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            sum[j]=0;
            scanf("%d",&arr[i][j]);
                sum[j]+=arr[i][j];
        }
    }
    int max=0;
    int index=0;
    for(int j=0;j<column;j++){
        if(sum[j]>max){
            max=sum[j];
            index=j;
        }
    }
    if(max){
    printf("%d",index);
    return 0;}
}