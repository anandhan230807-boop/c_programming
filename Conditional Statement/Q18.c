#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n/100)
	   printf("three digit");
	else if(n/10)
	   printf("Two digit");
	else
	  printf("one digit");
	return 0;
}