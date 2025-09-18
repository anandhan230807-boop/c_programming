#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	b=a%10;
	if(b%3==0)
	{
		printf("%d Is Divisible By 3",b);
	}else 
	    printf("%d Is Not Divisible By 3",b);
	    return 0;
}