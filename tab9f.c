#include<stdio.h>
#include<math.h>
int main()
{
 int n,i=1,sum=0;
 printf("enter the multiple :");
 scanf("%d",&n);
 /*for(i<n;sum == 9*i;i++)
	printf("%d\n",sum);*/
for(i;i<=10;i++){
	printf("%d*%d=%d\n",n,i,n*i);
}
return 0;
}

/*
9*1=09
9*2=18
9*3=27
4
5
6
7
8
9
9*10=90













*/