#include<stdio.h>
#include<math.h>
int main()
{
 int n,x=0;
 printf("enter the number:");
 scanf("%d",&n);
 x = 2*pow(3,n-1);
 printf("nth term is %d\n",x);
 return 0;
}