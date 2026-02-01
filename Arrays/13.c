#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    float avg=(float)sum/n;
    int count=0;
    for(int i=0;i<n;i++){
        if(avg<arr[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}