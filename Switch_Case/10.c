#include<stdio.h>
int main(){
    int code,experience;
    scanf("%d %d",&code,&experience);
    switch (code)
    {
    case 1:
        if(experience>=3){
            int bonus=50000+(5000*experience);
            printf("Salary $%d",bonus);
        }
        else{
            printf("Salary $50000");
        }
        break;
    case 2:
        if(experience>=3){
            int bonus=35000+(5000*experience);
            printf("Salary $%d",bonus);
        }
        else{
            printf("Salary $35000");}
        break;
    }
    return 0;
}