#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c;
 printf("enter the numbers a,b,c:");
 scanf("%d %d %d",&a,&b,&c);
 if (a<b&&b<c)
	printf("the smallest and greatest numbers among the three numbers are  %d amd %d",a,c);
 else
	if(b<a&&a<c)
		printf("the smallest and greatest numbers among the three numbers are  %d amd %d",b,c);
	else
		if (c<a&&a<b)
		 printf("the smallest and greatest numbers among the three numbers are  %d amd %d",c,b);
		else
			if(b<c&&c<a)
			 printf("the smallest and greatest numbers among the three numbers are  %d amd %d",b,a);
			else
				if(c<b&&b<a)
				 printf("the smallest and greatest numbers among the three numbers are  %d amd %d",c,a);
				else
					 printf("the smallest and greatest numbers among the three numbers are  %d amd %d",a,b);
 return 0;
}