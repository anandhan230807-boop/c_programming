#include<stdio.h>//SA & V of cylinder
int main(){                                                  
	float r,h,surfacearea,volume;
	scanf("%f %f",&r,&h);                         
	surfacearea=2*3.14*r*(h+r);
	volume=3.14*(r*r)*h;
	printf("%f\n%f",surfacearea,volume);
	return 0;
}









//v=pi r^2h
//sa =2 pi r(h +r)