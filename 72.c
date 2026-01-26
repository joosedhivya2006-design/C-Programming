// 72.Smallest using ternary operator
#include <stdio.h>

int main() {
    int n1,n2,smallest;
    scanf("%d ",&n1);
    scanf("%d",&n2);
    smallest=(n1<n2)? n1:n2;
    printf("%d is the smallest",smallest);
    return 0;
}