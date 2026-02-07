#include<stdio.h>
int main(){
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    int total=0;;
    int sum1=0;
    int element=0;
    int row_total=0;
    int column_total=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
            element=arr[i][j];
            if(i==0){sum1+=arr[i][j];} if(i==row-1){
                sum1+=arr[i][j];
            }
        }
}
int sum[column];
for(int a=1;a<row-1;a++){
    for(int b=0;b<column ;b++){
            sum[b]=0;
            if(b==0)
            sum[b]+=arr[a][b];
            else if(b==column-1)
                sum[b]+=arr[a][b];
            column_total+=sum[b];
    }
}
total=sum1+column_total;
printf("%d",total);
return 0;
}