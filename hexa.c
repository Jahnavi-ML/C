#include <stdio.h>
#include<math.h>
int main()
{
 float a, area;
 printf("enter the side a of a heaxagon:");
 scanf("%f",&a);
 area=(3*sqrt(3)*a*a)/2;
 printf("area of the hexagon :%f",area);
 return 0;
}