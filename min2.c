#include<stdio.h>
#include<math.h>
int main()
{
 int b,c;
 printf("enter the numbers b,c:");
 scanf("%d %d",&b,&c);
if(b<c)
	printf("the smallest number among the two numbers is %d",b);
else
	printf("the smallest number among the two numbers is %d",c);
 return 0;
}