#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	if(ch>='0' && ch<='9')
	   printf("This is digit");
	else
	   printf("this is not a digit");
	   return 0;
}