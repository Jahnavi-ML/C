#include <stdio.h>
#include <math.h>
int main()
{
 float b,h,area;
 printf("enter the base b value of a pentagon:");
 scanf("%f",&b);
 printf("enter the height h of a pentagon:");
 scanf("%f",&h);
 area = (b*h)/2;
 printf("area of a pentagon is %f",area);
 return 0;
}