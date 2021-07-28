#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c;
 printf("enter the numbers a,b,c:");
 scanf("%d %d %d",&a,&b,&c);
 if (a<c&&a<b)
	printf("the smallest number among the three numbers is %d",a);
 else
	if(b<c)
		printf("the smallest number among the three numbers is %d",b);
	else
		printf("the smallest number among the three numbers is %d",c);
 return 0;
}