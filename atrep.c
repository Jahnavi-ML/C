#include <stdio.h>
#include <math.h>
int main()
{
 float a,b,h,area;
 printf("enter the side a of a trapezium :");
 scanf("%f",&a);
 printf("enter the side b of a trapezium :");
 scanf("%f",&b);
 printf("enter the height h of a trapezium :");
 scanf("%f",&h);
 area = ((a+b)*h)/2;
 printf("area of a trapezium : %f",area);
 return 0;
}