#include<stdio.h>
#include<math.h>
int main()
{
 int i,fact=1,n;
 printf("enter the number :");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
  {
   fact = fact*i;
	printf(" factorial of %d is %d\n",n,fact);
  }
return 0;
}