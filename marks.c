#include<stdio.h>
#include<math.h>
int main()
{
 int SUB1,SUB2,SUB3,SUB4,SUB5,SUB6,sum=0;
 float percent;
 printf("enter the marks in SUB1:");
 scanf("%d",&SUB1);
 printf("enter the marks in SUB2:");
 scanf("%d",&SUB2);
 printf("enter the marks in SUB3:");
 scanf("%d",&SUB3);
 printf("enter the marks in SUB4:");
 scanf("%d",&SUB4);
 printf("enter the marks in SUB5:");
 scanf("%d",&SUB5);
 printf("enter the marks in SUB6:");
 scanf("%d",&SUB6);
 sum= SUB1+SUB2+SUB3+SUB4+SUB5+SUB6;
 percent= sum/6;
 printf("percentage is %f\n",percent);
 if (percent>=80)
	printf("'A GRADE'");
 else if(percent<80&&percent>60)
	printf("'B GRADE'");
 else if(percent<60&&percent>40)
	printf("'C GRADE'");
 else
	printf("'FAIL'");
return 0;
}