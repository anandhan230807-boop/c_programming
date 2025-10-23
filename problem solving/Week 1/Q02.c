#include<stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	int avg;
	avg=sum/n;
	printf("%d\n",sum);
	printf("%d",avg);
	return 0;
	
}
