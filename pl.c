#include<stdio.h>
#include<math.h>
int main()
{
 float b,s;
 printf("enter the price of the object brought,b \n");
 scanf("%f",&b);
 printf("enter the price of the object sold,s \n");
 scanf("%f",&s);
 if(b<s)
	{
	 printf("the object is sold at profitable price %0.2f",s-b);
	}
 else if (b>s)
	{
	 printf("the object is sold at loss price %0.2f",b-s);
	
	}
 else 
	 printf(" the object is sold at bought price");
return 0;
}