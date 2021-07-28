#include<stdio.h>
#include<math.h>
int main()
{
 int n;
 float SUM;
 printf("enter the n value:");
 scanf("%d",&n);
 SUM= (n*(2*n*n-1)*n);
 printf("sum of cubes of n odd natural numbers is %f",SUM);
 return 0;
}