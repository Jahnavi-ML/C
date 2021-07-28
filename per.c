#include <stdio.h>
#include<math.h>
int main()
{
 float a,b,c,d,e,avg,per;
 printf("enter the value of a:");
 scanf("%f",&a);
 printf("enter the value of b:");
 scanf("%f",&b);
 printf("enter the value of c:");
 scanf("%f",&c);
 printf("enter the value of d:");
 scanf("%f",&d);
 printf("enter the value of e:");
 scanf("%f",&e);
 avg=(a+b+c+d+e)/5;
 printf("average of 5values: %f\n ",avg);
 printf("percentage of values: %f ",avg);
 return 0;
}