#include<stdio.h>
#include<math.h>
int main()
{
 int b,c;
 printf("enter the numbers b,c:");
 scanf("%d %d",&b,&c);
if(b<c)
	printf("the greatest and smallest number among the two numbers are c is %d and b is %d",c,b);
else
	printf("the greatest and smallest number among the two numbers are b is %d and c is %d",b,c);
 return 0;
}