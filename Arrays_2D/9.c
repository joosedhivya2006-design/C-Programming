#include<stdio.h>
int main(){
    int row,column;
    int total=0;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        int even=0;
        int odd=0;
        for(int j=0;j<column;j++){
            if(arr[i][j]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even==odd){
            total++;
        }
    }
    printf("%d",total);
    return 0;
}