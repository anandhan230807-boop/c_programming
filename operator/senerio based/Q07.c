#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the candies have:");
	scanf("%d",&a);
	printf("people count:");
	scanf("%d",&b);
	c=a/b;
	printf("For each people %d candies",c);
	return 0;
}