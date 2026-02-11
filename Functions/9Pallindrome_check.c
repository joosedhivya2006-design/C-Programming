#include<stdio.h>
int pallindrome(int n){
    int temp=n;
    int rev=0;
    while (n!=0)
    {
        int ld=n%10;
        rev=(rev*10)+ld;
        n/=10;
    }
    if(temp==rev){
        printf("Pallindrome");
    }
    else{
        printf("Not Pallindrome");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int op=pallindrome(n);
    return 0;
}