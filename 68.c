//68.Type of triangle
#include <stdio.h>
int main(){
    int a,b,c,sum;
    scanf("%d ",&a);
    scanf("%d ",&b);
    scanf("%d",&c);
    sum=a+b+c;
    if(sum==180){
        if(a==b && b==c && a==c){
        printf("Equilateral Triangle");
        }
        else if((a==b && a!=c) || (b==c && b!=a)|| (c==a && c!=b)){
            printf("Isosceles Triangle");
        }
        else if(a!=b && b!=c && c!=a) {
            printf("Scalene Triangle");
        }      
    }
    else{
        printf("Not a Valid Triangle");
    }
    
    return 0;
}