// 77.Menu-Driven Program
#include <stdio.h>

int main() {
    int op,a,b;
    scanf("%d",&op);
    scanf("%d %d",&a,&b);
    switch(op){
        case 1:
            printf("Sum = %d",a+b);
            break;
        case 2:
            printf("Difference = %d",a-b);
            break;
        case 3:
            printf("Product = %d",a*b);
            break;
        case 4:
            printf("Quotient = %.2f",(float)a/(float)b);
            break;
        case 5:
            printf("Remainder = %d",a%b);
            break;
        case 6:
            printf("Exit");
            break;
        
        default:
            printf("Enter valid operation number");
    }
    return 0;
}