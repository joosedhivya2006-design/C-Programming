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
    int total=row*column;
    int repeat=0;
    int count=0;
    for(int i=0;i<total;i++){
        int r1=i/column;
        int c1=i%column;
        int current=arr[r1][c1];
        for(int j=i+1;j<total;j++){
            int r2=j/column;
            int c2=j%column;
            if(current==arr[r2][c2]){
                repeat=current;
                count=1;
                break;
            }
        }
    if(count){
        break;
    }
    }
    if(count){
    printf("%d",repeat);}
    return 0;
}