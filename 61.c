//61.Voting eligibility
#include <stdio.h>

int main() {
    int age;
    scanf("%d",&age);
    if(age>=18){
        printf("Eligible to vote");
    }
    else if(age>=0 && age<18){
        printf("Not Eligible to vote");
    }
    else{
        printf("Invalid age");
        
    }

    return 0;
}