#include<stdio.h>
int main(){
    int a,b,lcm;
    scanf("%d %d",&a,&b);
    lcm=(a>b)?a:b;
    for(int lcm=1;lcm<=a*b;lcm++){
        if(lcm%a==0 && lcm%b==0){
            printf("%d",lcm);
            break;
        }
    }
    return 0;
}