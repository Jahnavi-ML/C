#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,x=0;
	printf("enter the th term that you want:");
	scanf("%d",&n);
	if(n%2==0)
	{
		for(i=1;i<=n/2;--i)
		{
			x = 6*i-2;
			printf("the nth term of the series is %d\n",x);
		}
	}
	else
	{
		for(i=1;i<=((n+1)/2);--i)
		{
			x = 6*i;
			printf("the nth term of the series is %d\n",x);
		}
	}
return 0;
}