#include<stdio.h>
#include<math.h>
int main()
{
 int y;
 printf("enter the year:");
 scanf("%d",&y);
 if (y%4==0)
	printf("IT IS A LEAP YEAR");
 else
	printf("IT IS NOT A LEAP YEAR");
return 0;
}