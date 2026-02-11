#include<stdio.h>
int intrest(int p,int r,int t){
    float i=(p*r*t)/100;
}
int main(){
    int p,r,t;
    scanf("%d",&p);
    scanf("%d",&r);
    scanf("%d",&t);
    float output=intrest(p,r,t);
    printf("%.2f",output);
    return 0;
}
