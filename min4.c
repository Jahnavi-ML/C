#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c,d;
 printf("enter the numbers a,b,c,d:");
 scanf("%d %d %d %d",&a,&b,&c,&d);
 if (a<c&&a<b)
	printf("the smallest number among the three numbers is %d",a);
 else
	if(b<c&&b<d)
		printf("the smallest number among the three numbers is %d",b);
	else
		if(c<d)
			printf("the smallest number among the three numbers is %d",c);
		else
			printf("the smallest number among the three numbers is %d",d);
 return 0;
}