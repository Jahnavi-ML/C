#include<stdio.h>
#include<math.h>
int main()
{
 float x1,y1,x2,y2,m,x,y,z;
 printf("enter the point (x1,y1)\n");
 scanf("%f%f",&x1,&y1);
 printf("enter the point (x2,y2)\n");
 scanf("%f%f",&x2,&y2);
 m=(y2-y1)/(x2-x1);
 z=-m*x1+y1;
 printf("slope of the points is %f\n",m);
 printf("the equation of the straight line is y=%fx+(%f)",m,z);
 return 0;
}