#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n<2){
        printf("Enter at least 2 elements");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest, secondLargest;
    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else if(arr[0]<arr[1]){
        largest = arr[1];
        secondLargest = arr[0];
    }
    else if(arr[0]==arr[1]){
        largest=arr[0];
        secondLargest=arr[2];
    }
    for (int i = 2; i < n; i++) {
        if (arr[i] >= largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] <largest && arr[i] >secondLargest) {
            secondLargest = arr[i];
        }
    }
    printf("%d", secondLargest);
    return 0;
}

