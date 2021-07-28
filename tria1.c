#include <stdio.h>
#include<math.h>
int main()
{
 float a,b,c,s, area;
 printf("enter the side a of a triangle:");
 scanf("%f",&a);
 printf("enter the side b of a triangle:");
 scanf("%f",&b);
 printf("enter the side c of a triangle:");
 scanf("%f",&c);
 s=(a+b+c)/2;
 area =sqrt(s*(s-a)*(s-b)*(s-c));
 printf("area of triangle with 3 diffterent sides:%f",area);
 return 0;
}