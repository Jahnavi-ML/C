#include <stdio.h>
#include<math.h>
int main()
{
 float x1,x2,y1,y2,dist;
 printf("enter the point (x1,y1)\n");
 scanf("%f%f",&x1,&y1);
 printf("enter the point (x2,y2)\n");
 scanf("%f%f",&x2,&y2);
 dist=(y2-y1)/(x2-x1);
 printf("the distance between the two points is %f",dist);
 return 0;
}