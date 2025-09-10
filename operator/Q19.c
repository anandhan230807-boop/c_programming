#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c){
		printf("The Greatest number is: %d",a);
	}
	else if(b>c){
		printf("The Greatest number is: %d",b);
	}
	else{
		printf("The Greatest number is: %d",c);
	}
	return 0;
}