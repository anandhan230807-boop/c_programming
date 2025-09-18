#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a%2==0 && a%5==0 && a%8!=0)
	{
		printf("%d Is Divisible By 2 And 5",a);
	}else 
	    printf("%d Is Not Divisible By 2 And 5",a);
	    return 0;
}