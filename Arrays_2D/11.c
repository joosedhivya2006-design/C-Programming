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
    int sorted=0;
    int count=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column-1;j++){
            if(arr[i][j]<arr[i][j+1]){
                sorted=1;
            }
            else{
                sorted=0;
            }
        }
        if(sorted==1){
            count++;
        }
    }
    if(sorted){
        printf("%d ",count);
    }
    else printf("%d",count);
    return 0;
}