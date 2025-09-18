#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && a<c){
	    printf("The Smallest Number Is:%d",a);
	}else if(b<c)
	    printf("The Smallest Number Is:%d",b);
	else
	 printf("The Smallest Number Is:%d",c);
	    return 0;
}