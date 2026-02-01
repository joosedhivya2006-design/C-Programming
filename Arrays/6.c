#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int max = 0;
    for(int i=0;i<n;i++){
        int duplicate = 0;
        for(int j = 0; j < max; j++){
            if(arr[i] == arr[j]){
                duplicate = 1;
                break;
            }
        }
        if(!duplicate){
            arr[max] = arr[i];
            max++;
        }
    }
    for(int i=0;i<max;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
