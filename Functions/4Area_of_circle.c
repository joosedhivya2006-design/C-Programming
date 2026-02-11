#include<stdio.h>
float area(int r){
    float area=3.14*r*r;
    return area;
}
int main(){
    int r;
    scanf("%d",&r);
    float op=area(r);
    printf("%.2f",op);
    return 0;
}