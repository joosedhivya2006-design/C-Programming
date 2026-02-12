#include<stdio.h>
float add(float a,float b){
    return a+b;
}
float diff(float a,float b){
    return a-b;
}
float prod(float a,float b){
    return a*b;
}
float division(float a,float b){
    if(b!=0){
        return a/b;
    }
    else{
        printf("Error");
    }
}
int main(){
    float a,b,result;
    char choice;
    scanf("%f\n%f\n",&a,&b);
    scanf("%c",&choice);
    switch (choice)
    {
    case '+':
        result=add(a,b);
        printf("%.0f",result);
        break;
    case '-':
        result=diff(a,b);
        printf("%.0f",result);
        break;
    case '*':
        result=prod(a,b);
        printf("%.0f",result);
        break;
    case '/':
       result=division(a,b);
       printf("%.2f",result);
       break;
    default:
        printf("Invalid Operator");
    }
    return 0;
}