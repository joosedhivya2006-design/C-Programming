#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    int max=0;
    for(int i=0;i<n;i++){
        if(max<*(p+i)){
            max=*(p+i);
        }
    }
    printf("%d",max);
    return 0;
    
}
