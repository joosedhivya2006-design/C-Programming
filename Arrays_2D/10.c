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
    int product=1,index=0;
    for(int i=0;i<row;i++){
        int current_product=1;
        for(int j=0;j<column;j++){
            current_product*=arr[i][j];
            if(current_product>product){
            product=current_product;
            index=i;
            }
        }
        if(index){
            printf("%d",index);
            return 0;
        }
    } 
    printf("%d",index);
}