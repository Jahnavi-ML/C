#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
 float r,circum;
 printf("enter the radius of the cricle:");
 scanf("%f",&r);
 circum = 2*PI*r;
 printf("circumference of the circle is : %0.2f",circum);
 return 0;
}