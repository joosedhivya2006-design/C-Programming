#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=1;
    int length=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            length++;
            if(length>max){
                max=length;
            }}
        else{
            length=1;
        }
    }
    printf("%d",max);
    return 0;
}