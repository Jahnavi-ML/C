#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c,d,n;
 printf("please enter the choice numbers: \n1.\t2 numbers\n2.\t3 numbers\n3.\t4 numbers\n");
 scanf("%d",&n);
 switch(n){
	case 1: n==1;
		printf("enter the numbers a,b: ");
		scanf("%d %d",&a,&b);
		if (a<b)
			printf("min=%d",a);
		else
			printf("min=%d",b);
	break;
	case 2: n==2;
		printf("enter the numbers a,b,c:");
		scanf("%d %d %d",&a,&b,&c);
		if(a<b&&a<c)
			printf("min=%d",a);
		else if(b<c)
			printf("min=%d",b);
		else
			printf("min=%d",c);
	break;
	case 3: n==3;
		printf("enter the numbers a,b,c,d");
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(a<b&&a<c&&a<d)
			printf("min=%d",a);
		else if(b<c&&b<d)
			printf("min=%d",b);
		else if(c<d)
			printf("min=%d",c);
		else
			printf("min=%d",d);
}		
return 0;
}