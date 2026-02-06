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
    int max=0;
    int count=0;
    int increase=0;
    for(int i=0;i<row;i++){
        for(int j=1;j<column;j++){
            if(arr[i][j]>arr[i][j-1] && max<arr[i][j]){
                max=arr[i][j];
                increase=1;
            }
            if(arr[i][j]<=arr[i][j-1]){
                max=0;
                increase=0;
                break;
            }
        }
        if(increase){
            count++;
        }
    }
    if(increase)
    printf("%d",count);
    else printf("%d",count);
    return 0;
}