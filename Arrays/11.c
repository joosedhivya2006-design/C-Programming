#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int total=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        total+=arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        total-=arr[i];
        if (sum==total){
            printf("%d",i);
            return 0;
        }
        sum=sum+arr[i];
    }
    printf("-1");
    return 0;
}