#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("%d\n",c);
	if(c>0)
	   printf("Positive");
	else
	  printf("Negative");
	return 0;
}