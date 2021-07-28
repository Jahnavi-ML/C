#include <stdio.h>
#include<math.h>
int main()
{
 float a,b,c, area;
 printf("enter the side a of a right angle triangle:");
 scanf("%f",&a);
 printf("enter the side b of a right angle triangle:");
 scanf("%f",&b);
 c=sqrt(a*a+b*b);
 printf("the other side of a right angle triangle: %f ",c);
 return 0;
}