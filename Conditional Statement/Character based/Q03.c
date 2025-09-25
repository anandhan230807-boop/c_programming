#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	if(ch>='A' && ch<='z')
	   printf("the given is Alphabet");
	else
	   printf("the given is not Alphabet");
	   return 0;
}