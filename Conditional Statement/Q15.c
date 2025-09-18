#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a%3==0 || a%7==0)
	{
		printf("%d Is Divisible By Either 3 Or 7",a);
	}else 
	    printf("%d Is Not Divisible By Either 3 Or 7",a);
	    return 0;
}