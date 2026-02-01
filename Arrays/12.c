#include<stdio.h>
int main(){
    int n,bill;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&bill);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==bill){
                printf("%d %d",arr[i],arr[j]);
                return 0;
            }
        }
    }
    printf("No pair");
    return 0;
}