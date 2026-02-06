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
    int alter=0;
    int index=0;
    for(int i=0;i<row;i++){
        for (int j=0;j<column-1;j++)
        {
            if((arr[i][j]%2==0 && arr[i][j+1]%2!=0)||(arr[i][j]%2!=0 && arr[i][j+1]%2==0)){
                alter=1;
            }
            else{
                alter=0;
            }
        }
        if(alter==1){
            index=i;
            break;
        } 
    }
    if(alter==1){
        printf("%d",index);
    }
    else printf("No Even-Odd Alternating");
    return 0;
}