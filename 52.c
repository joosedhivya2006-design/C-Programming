//52.Use /= and %= operator

#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	int temp1=a;
	int temp2=a;
	scanf("%d",&a);
	temp1/=a;
	temp2%=a;
	printf("%d %d",temp1,temp2);
	return 0;
}