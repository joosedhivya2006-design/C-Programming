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
    int min=arr[0][0];int max=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(min>arr[i][j]){
                min=arr[i][j];
            }
            if(max<arr[i][j]){
                max=arr[i][j];}
            if(min<arr[i][j+i] && max>arr[i+j][j]){
                    count++;
                    printf("%d ",count);
                    return 0;
            }
        }
    }
    printf("%d",count);
    return 0;
}