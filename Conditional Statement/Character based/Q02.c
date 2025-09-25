#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	   printf("the given is uppercase");
	else if(ch>='a' && ch<='z')
	    printf("the given is lowercase ");
	else if(ch>='0' && ch<='9')
	   printf("the given is digit");
	else
	   printf("the given is special symbol");
	   return 0;
}