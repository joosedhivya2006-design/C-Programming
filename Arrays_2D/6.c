#include<stdio.h>
#include<stdlib.h>
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
    int max=0;
    int min=sum[0];
    for(int i=0;i<row;i++){
            int diff=abs(sum[i]-min);
            if(diff>max){
                max=diff;
            }
            if(sum[i]<min){
                min=sum[i];
            }
    }
    printf("%d",max);
    return 0;
}