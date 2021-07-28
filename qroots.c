//*quadratic equation roots*//
#include <stdio.h>
#include<math.h>
int main()
{
 float a,b,c,r1,r2;
 printf("enter the coefficients a,b,c:");
 scanf("%f %f %f",&a,&b,&c);
 printf("the quadratic equation is %0.1fx*x+%0.1fx+%0.1f\n",a,b,c);
 if((b*b-4*a*c)>0)
   {
	 printf("the roots are real and unequal\n");
	 r1=(-b+sqrt(b*b-4*a*c))/2*a;
	 r2=(-b-sqrt(b*b-4*a*c))/2*a;
	 printf("the roots are %f\n and %f\n",r1,r2);
   }
 else 
    {
	 if((b*b-4*a*c)==0)
	 {
		printf("the roots are real and equal\n");
		r1= -b/2*a;
		r2= -b/2*a;
		printf("the roots are %f\n and %f\n",r1,r2);
	 }
	 else
		 printf("the roots are imaginary");
    }
return 0;
}