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
    int largest,secondLargest;
    if(arr[0][0]<arr[0][1]){
        largest=arr[0][1];
        secondLargest=arr[0][0];
    }
    else if(arr[0][0]==arr[0][1]){
        largest=arr[0][0];
        secondLargest=arr[0][2];
    }
    else{
        largest=arr[0][0];
        secondLargest=arr[0][1];
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]>largest){
                secondLargest=largest;
                largest=arr[i][j];
            }
            else if(arr[i][j]<largest && arr[i][j]>secondLargest){
                secondLargest=arr[i][j];
            }
        }
    }
    printf("%d",secondLargest);
    return 0;
}