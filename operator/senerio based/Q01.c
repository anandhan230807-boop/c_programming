#include<stdio.h>
int main(){
	int a,b;
	printf("Enter amount:");
	scanf("%d",&a);
	printf("Enter discount percentage:");
	scanf("%d",&b);
	int c,d;
	c=(a/100)*b;
	d=a-c;
	printf("The amount after discount:%d",d);
	return 0;
	
}