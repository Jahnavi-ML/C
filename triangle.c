#include<stdio.h>
#include<math.h>
int main()
{
 int x1,x2,x3,y1,y2,y3;
 float a,b,c;
 printf("Enter the points (x1,y1)");
 scanf("%d %d",&x1,&y1);
 printf("Enter the points (x2,y2)");
 scanf("%d %d",&x2,&y2);
 printf("Enter the points (x3,y3)");
 scanf("%d %d",&x3,&y3);
 a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
 b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
 c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
 if(a==b&&b==c&&c==a)
	printf("EQUILATERAL TRIANGLE");
 else if((a==b)||(b==c)||(c==a))
		printf("ISOSCELES TRIANGLE");
	else if ((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==b*b+a*a))
			printf("RIGHT ANGLED TRIANGLE");
	    else
			printf("SCALEN TRIANGLE");
return 0;
}