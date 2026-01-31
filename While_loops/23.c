#include<stdio.h>
int main(){
    int n,level,count=0,count1=0,count2=0,max1=0,max2=0,total=0,sum=0,index=0;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&level);
        if(level>70){
            count++;
        }
        count2++;
        if(max1<level && level>70){
            count1++;
            if(max1<count1){
                max1=count1;
                if(max2<count){
                    index=count2;
                }
            }            
        }
        else{
            count1=0;
        }
        
        i++;
    }
    if(index>0){
        printf("Breakdown At Reading : %d\n",index);

    }
    else{
        printf("Breakdown At Reading : Not Occured\n");
    }
    printf("Unsafe Readings: %d",count);
    return 0;
}