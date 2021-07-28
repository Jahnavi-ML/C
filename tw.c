#include<stdio.h>
#include<math.h>
int main()
{
 int n,t,i=0 ;
 printf("enter the multipe of the number:");
 scanf("%d",&n);
 /*while(i<n)
	{
	 i++;
	 t = i*9;
	 printf("%d\n",t);
	}*/
i=1;
while(i<=10){
	printf("%d X %d = %d\n",n,i,n*i);
	i++;
}
return 0;
}