#include<stdio.h>
int main(){
    int row,column;
    scanf("%d",&row);
    scanf("%d",&column);
    int arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0;
    int repeat_element=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            int present_element=arr[i][j];
            int present_count=0;
        for(int a=0;a<row;a++){
            for(int b=0;b<column;b++){
            if(arr[a][b]==present_element){
                present_count++;
            }
        }
    }
    if(present_count>max){
        max=present_count;
        repeat_element=present_element;
    }
}
    }
    printf("%d",repeat_element);
    return 0;
}