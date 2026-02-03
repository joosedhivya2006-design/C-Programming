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
    int largest,secondLargest,smallest,secondSmallest;
    if(arr[0][0]>arr[0][1]){
        largest=arr[0][0];
        secondLargest=arr[0][1];
        smallest=arr[0][1];
        secondSmallest=arr[0][0];
    }
    else if(arr[0][0]==arr[0][1]){
        largest=arr[0][0];
        secondLargest=arr[0][2];
        smallest=arr[0][0];
        secondSmallest=arr[0][2];
    }
    else{
        largest=arr[0][1];
        secondLargest=arr[0][0];
        smallest=arr[0][0];
        secondSmallest=arr[0][1];
    }
    int profit1,profit2;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]>largest){
                secondLargest=largest;
                largest=arr[i][j];
            }
            else if(arr[i][j]<largest && arr[i][j]>secondLargest){
                secondLargest=arr[i][j];
            }
            profit1=largest*secondLargest;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]<smallest){
                secondSmallest=smallest;
                smallest=arr[i][j];
            }
            else if(arr[i][j]>smallest && arr[i][j]<secondSmallest){
                secondSmallest=arr[i][j];
            }
            profit2=smallest*secondSmallest;
        }
    }
    if(profit1>profit2){
        printf("%d",profit1);
    }
    else{
        printf("%d",profit2);
    }
    return 0;
}