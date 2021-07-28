#include<stdio.h>
#include<math.h>
int main()
{
 int a,b;
 printf("enter the number a:");
 scanf("%d",&a);
 printf("enter the number b:");
 scanf("%d",&b);
 if (a%b==0)
	printf("a is divisible by b ");
 else
	printf("a is NOT divisible by b");
return 0;
}