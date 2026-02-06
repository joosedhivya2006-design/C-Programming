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
    int found=0;
    int non_repeat=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        int current_element=arr[i][j];
        int count=0;
        for(int a=0;a<row;a++){
        for(int b=0;b<column;b++){
            if(arr[a][b]==current_element){
                count++;
            }
        }
    }
        if(count==1){
            non_repeat=current_element;
            found=1;
            }
        }
        if(found){
            break;
        }
    }
    if(found==1){
        printf("%d",non_repeat);
    }
    else{
        printf("No repeat");
    }
    return 0;
}