#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a%3==0 && a%5==0)
	{
		printf("%d Is Divisible By 3 And 5",a);
	}else 
	    printf("%d Is Not Divisible By 3 And 5",a);
	    return 0;
}