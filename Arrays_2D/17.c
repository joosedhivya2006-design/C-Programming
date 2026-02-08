#include<stdio.h>
int main(){
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<row;i++){
        int sum=0;
        int diagonal=arr[i][i];
        for(int j=0;j<column;j++){
            if(i!=j){
                sum+=arr[i][j];
            }
        }
        if(diagonal>sum){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}