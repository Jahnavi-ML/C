#include<stdio.h>
#include<math.h>
int main()
{
 int n;
 float SUM;
 printf("enter the n value:");
 scanf("%d",&n);
 SUM= (n*(n+1)*(2*n+1))/6;
 printf("sum of squares of n natural numbers is %f",SUM);
 return 0;
}