#include<stdio.h>
int main()
{
	char ch[20]; 
	scanf("%[^\n]s",ch); // -> white space Welcome to c
	printf("%s",ch);
	return 0;
}