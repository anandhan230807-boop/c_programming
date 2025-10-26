#include<stdio.h>
int main(){
	int a,b;
	printf("Enter bytes:");
	scanf("%d",&a);
	b=a*4;
	printf("The bits for given byte %d",b);
	return 0;
}