#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	b=a%10;
	if(b%2==0)
	   printf("%d Is Even Number",b);
	else
	   printf("%d Is Odd Number",b);
	   return 0;
	   
}