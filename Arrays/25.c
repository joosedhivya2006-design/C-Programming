#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n<2){
        printf("Enter at least 2 elements");
        return 0;
    }
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    int largest, secondLargest,smallest,secondSmallest;
    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }
    if(arr[0]<arr[1]){
        smallest=arr[0];
        secondSmallest=arr[1];
    }
    else{
        smallest=arr[1];
        secondSmallest=arr[0];
    }
    int profit1,profit2;
    for (int i=2;i<n;i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
        profit1=largest*secondLargest;
    }
    for(int i=2;i<n;i++){
        if(arr[i]<smallest && arr[i]<0){
            secondSmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<secondSmallest){
            secondSmallest=arr[i];
        }
        profit2=smallest*secondSmallest;
    }
    if(profit1>profit2){
        printf("%d",profit1);
    }
    else{
        printf("%d",profit2);
    }
    return 0;
}
