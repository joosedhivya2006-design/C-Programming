//53.Check Positive,Negative or zero

#include <stdio.h>

int main(){
	int input;
	scanf("%d",&input);
	if(input !=0){
		if(input<0){
			printf("Negative Number");
		}
		if(input>0){
			printf("Positive Number");
		}
	}
	else{
		printf("Zero");
	}
	return 0;
}