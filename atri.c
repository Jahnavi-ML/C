#include <stdio.h>
#include<math.h>
int main()
{
 float x1,x2,y1,y2,x3,y3,area;
 printf("enter the point (x1,y1)\n");
 scanf("%f%f",&x1,&y1);
 printf("enter the point (x2,y2)\n");
 scanf("%f%f",&x2,&y2);
 printf("enter the point (x3,y3)\n");
 scanf("%f%f",&x3,&y3);
 area=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
 printf("area %f",area);
 return 0;
}