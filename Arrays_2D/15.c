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
    int prime=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]==2||arr[i][j]==3||arr[i][j]==5||arr[i][j]==7){
                prime=1;
                count++;
            }
            else if(arr[i][j]%2!=0 && arr[i][j]%3!=0 && arr[i][j]%5!=0 && arr[i][j]%7!=0){
                prime=1;
                count++;
            }
            else{
                prime=0;
            }
        }
        if(prime){
            printf("%d",count);
            return 0;
        }
    }
}