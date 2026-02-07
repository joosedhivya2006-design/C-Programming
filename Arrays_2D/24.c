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
    int prime=0;
    int count=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]==2||arr[i][j]==3||arr[i][j]==5||arr[i][j]==7){
                prime=1;
            }
            else if(arr[i][j]%2!=0 && arr[i][j]%3!=0 && arr[i][j]%5!=0 && arr[i][j]%7!=0){
                prime=1;
            }
            else{
                prime=0;
            }
        }
        if(prime){
                count++;
            }
    }
    if(prime){
        printf("%d",count);
    }
    else printf("%d",count);
    return 0;
}