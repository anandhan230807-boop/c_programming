#include<stdio.h>
int main(){                                                  
	int l,b,h,surfacearea,volume;
	scanf("%d%d%d",&l,&b,&h);                         
	surfacearea=2*(l*b + b*h + h*l);
	volume=l*b*h;
	printf("%d\n%d",surfacearea,volume);
	return 0;
} 
        