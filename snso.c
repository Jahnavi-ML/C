#include<stdio.h>
#include<math.h>
int main()
{
 int n;
 float SUM;
 printf("enter the n value:");
 scanf("%d",&n);
 SUM= (n*(4*n*n-1))/3;
 printf("sum of squares of n odd natural numbers is %f",SUM);
 return 0;
}