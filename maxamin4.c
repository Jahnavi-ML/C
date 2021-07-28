#include <stdio.h>
#include<math.h>
int main()
{
 int a,b,c,d;
 printf("enter the numberds a,b,c,d:");
 scanf("%d %d %d %d",&a,&b,&c,&d);
 if(d<b&&b<c&&c<a&&d<c&&c<b&&b<a)
	printf("the smallest and largest numbers among the four numbers are d is %d amd a is %d",d,a);
 else if(a<b&&b<c&&c<d&&a<c&&c<b&&b<d)
	 printf("the smallest and largest numbers among the four numbers are a is %d amd d is %d",a,d);
else if(d<b&&b<a&a<c&&d<a&&a<b&&b<c)
	 printf("the smallest and largest numbers among the four numbers are d is %d amd c is %d",d,c);
else if(c<a&&a<d&&d<b&&c<d&&b<a&&a<b)
	printf("the smallest and largest numbers among the four numbers are c is %d amd b is %d",c,b);
else if(b<c&&c<d&&d<a&&b<d&&d<c&&c<a)
	printf("the smallest and largest numbers among the four numbers are b is %d amd a is %d",b,a);
else if(b<a&&a<c&&c<d&&b<c&&c<a&&a<d)
	printf("the smallest and largest numbers among the four numbers are b is %d amd d is %d",b,d);
else if(d<a&&a<c&c<b&&d<c&&c<a&&a<b)
	printf("the smallest and largest numbers among the four numbers are d is %d amd b is %d",d,b);
else if(c<b&&b<d&&d<a&&c<d&&d<b&&b<a)
	printf("the smallest and largest numbers among the four numbers are c is %d amd a is %d",c,a);
else if(b<a&&a<d&&d<c&&b<d&&d<a&&a<c)
	printf("the smallest and largest numbers among the four numbers are b is %d amd c is %d",b,c);
else if(a<c&&c<d&&d<b&&a<d&&d<c&&c<b)
	printf("the smallest and largest numbers among the four numbers are a is %d amd b is %d",a,b);
else if(a<b&&b<d&&d<c&&a<d&&d<b&&b<c)
	printf("the smallest and largest numbers among the four numbers are a is %d amd c is %d",a,c);
else
	printf("the smallest and largest numbers among the four numbers are c is %d amd d is %d",c,d);
return 0;
}