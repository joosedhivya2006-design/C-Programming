// 73.Simple calculator using(Switch)
#include <stdio.h>

int main() {
    int a,b;char ch;
    scanf("%d %c %d",&a,&ch,&b);
    switch(ch){
        case '+':
            printf("Result = %d",a+b);
            break;
        case '-':
            printf("Result = %d",a-b);
            break;
        case '*':
            printf("Result = %d",a*b);
            break;
        case '/':
            if(b==0){
                printf("Division by zero not possible");
            }
            else{
                printf("Result = %.2f",(float)a/(float)b);
            }
            break;
        case '%':
            printf("Result = %d",a%b);
            break;
        default:
            printf("Enter valid Operation like +,-,*,/,%");
    }
    return 0;
}