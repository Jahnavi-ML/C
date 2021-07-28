#include <stdio.h>
#include<math.h>
int main()
{
 int i,n1,n2,gcd;
 printf("enter two numbers n1,n2:");
 scanf("%d %d",&n1,&n2);
 for(i=1;i<=n1&&i<=n2;++i)
	{
		n1%i==0&&n2%i==0;
		printf("the gcd of two numbers %dand %d is %d \n",n1,n2,gcd);
	}
 return 0;
}