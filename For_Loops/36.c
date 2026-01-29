#include<stdio.h>
int main(){
    int n,patient,total=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&patient);
        total=total+patient;
        if(patient>100){
            count++;
        }
    }
    printf("Toatal Patients: %d\n",total);
    printf("Overcrowded Days: %d",count);
    return 0;
}