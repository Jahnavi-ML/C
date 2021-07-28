#include<stdio.h>
#include<math.h>
int main()
{
 int n;
 float SUM;
 printf("enter the n value:");
 scanf("%d",&n);
 SUM= (n*(n+1)*n*(n+1))/4;
 printf("sum of cubes of n natural numbers is %f",SUM);
 return 0;
}