#include<stdio.h>
int main(){
    int vechicleType,trips,car,truck;
    scanf("%d %d",&vechicleType,&trips);
    switch(vechicleType){
        case 1:
            if(trips>1 && trips<=10){
                car=800;
                printf("$%d",car);
            }
            else if(trips==1){
            car=100*trips;
            printf("$%d",car);
            }
            break;
        case 2:
            truck=240*trips;
            printf("$%d",truck);
            break;
    }
    return 0;
}