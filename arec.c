#include<stdio.h>
#include<math.h>
int main()
{
	float len,bre,area;
	printf("enter the length of the rectangle:");
	scanf("%f",&len);
	printf("enter the breadth of the rectangle:");
	scanf("%f",&bre);
	if (len>bre)
		{
		 area = len*bre;
		 printf("area of the rectangle is %0.4f",area);
		}
	else 
		if(len<bre)
		{
		 area = len*bre;
		 printf("area of the rectangle is %0.4f",area);	
		}
		else
		 printf("it is not a rectangle");
return 0;
}