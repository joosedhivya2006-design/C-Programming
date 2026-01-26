//59.Alphabet,Digit & Special characters

#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){printf("Alphabet");}
	else if(ch>='0' && ch<='9'){printf("Digit");}
	else{printf("Speacial characters");}
	return 0;
}
	