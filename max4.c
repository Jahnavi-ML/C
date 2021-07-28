#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c,d;
 printf("enter the numbers a,b,c,d:");
 scanf("%d %d %d %d",&a,&b,&c,&d);
 if (a>c&&a>b&&a>d)
	printf("the greatest number among the three numbers is %d",a);
 else
	if(b>c&&b>d)
		printf("the greatest number among the three numbers is %d",b);
	else
		if(c>d)
			printf("the greatest number among the three numbers is %d",c);
		else
			printf("the greatest number among the three numbers id %d",d);
 return 0;
}