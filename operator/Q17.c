#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if((n&(n-1))==0){
		printf("%d power of 2",n);
		return 0;
	}
	printf("%d is not power of 2",n);
	   
}