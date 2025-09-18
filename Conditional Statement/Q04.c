#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("The Difference Between Two Numbers:%d\n",c);
	if(c%2==0)
	   printf("%d Is Even Number",c);
	else
	   printf("%d Is Odd Number",c);
	   return 0;
	   
}