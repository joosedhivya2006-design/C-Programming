#include<stdio.h>
int main(){
    int n,marks,avg,count=0,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d ",&marks);
        sum=sum+marks;
        if(marks<40){
            count++;
        }
    }
    avg=sum/n;
    printf("Average Score: %d",avg);
    printf("Failed Subjects: %d",count);
    return 0;
}