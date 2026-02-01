#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n],arr1[n];
    int count=0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[n - 1];
    arr1[count++]=max;
    for(int i = n - 2; i >= 0; i--)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            arr1[count++]=max;
            
        }
    }
    for(int i = count - 1; i >= 0; i--)
    {
        printf("%d ", arr1[i]);
    }
    return 0;
}
