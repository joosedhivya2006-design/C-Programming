#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int start=0,end=n-1;
    for(int i=0;i<n/2;i++){
        int temp=arr1[start];
        arr1[start]=arr1[end];
        arr1[end]=temp;   
        start++;
        end--; 
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    return 0;
}