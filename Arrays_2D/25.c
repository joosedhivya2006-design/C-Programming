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
        int min=arr[i][0];
        int max=arr[i][0];
        for(int j=0;j<column;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
        if(max-min<=1000){
            count++;
        }
    }
    printf("%d ",count);
    return 0;
}