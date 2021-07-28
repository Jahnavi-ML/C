#include <stdio.h>
#include<math.h>
int main()
{
 float a,b,peri;
 printf("enter the side a value of a rectangle:");
 scanf("%f",&a);
 printf("enter the side b value of a rectangle:");
 scanf("%f",&b);
 peri= 2*(a+b);
 printf("perimetr of a rectangle is: %f",peri);
 return 0;
}