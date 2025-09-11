#include<stdio.h>//SA & V of sphere
int main(){                                                  
	float r,surfacearea,volume;
	scanf("%f",&r);                         
	surfacearea=4*3.14*r*r;
	volume=4/3*3.14*r*r*r;
	printf("%f\n%f",surfacearea,volume);
	return 0;
}













// sa =4 pi r^2
// v=4/3pi r^3