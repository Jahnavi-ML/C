#include<stdio.h>
#include<math.h>
#define PI 3.14
//area of circlr

int main()
{
	float r,area;
	printf("enter the radius of the circle:");
	scanf("%f",&r);
	area=PI*r*r;
	printf("area of the circle is %0.2f",area);
	return 0;
}