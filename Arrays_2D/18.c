#include<stdio.h>
#include<stdlib.h>
int main(){
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    int max=0;
    int min=0;
    int element=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
            element=arr[i][j];
            if(element<min){
                min=element;
            }
            if(element>max){
                max=element;
            }
        }
    }
    int diff=abs(max-min);
    printf("%d",diff);
    return 0;

}