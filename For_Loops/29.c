#include<stdio.h>
int main(){
    int salary,absent,present;
    present=100;
    scanf("%d %d",&salary,&absent);
    for(int i=1;i<=absent;i++){
        salary=salary-present;
    }
    printf("Final Salary: %d",salary);
    return 0;
}