#include <stdio.h>
#include<math.h>
int main()
{
 float a,h, area;
 printf("enter the side a of a triangle:");
 scanf("%f",&a);
 printf("enter the height h of a triangle:");
 scanf("%f",&h);
 area = (a*h)/2;
 printf("the area of triangle with base and height: %f ",area);
 return 0;
}
