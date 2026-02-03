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
    float sum=0;
    float avg;
    int index=0;float min=(arr[0][0]+arr[0][1]+arr[0][2])/column;
    for(int i=1;i<row;i++){
        for(int j=0;j<column;j++){
            sum=sum+arr[i][j];
        }
        avg=sum/column;
        if(avg<min){
            min=avg;
            index++;
            printf("%d",index);
        }
    }
    return 0;
}