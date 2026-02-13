#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int find;
    scanf("%d",&find);
    int *p=arr;
    int index=1;
    for(int i=1;i<=n;i++){
        if(*(p++)==find){
            index=i;
            break;
        }
        else{
            index=-1;
        }
    }
    if(index>0){
    printf("%d",index);
    }
    else{
        printf("%d",index);
    }
    return 0;
}