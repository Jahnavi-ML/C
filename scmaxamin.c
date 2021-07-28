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
		if (a>b)
			printf("max=%d\n",a);
		else
			printf("max=%d\n",b);
			if (a<b)
				printf("min=%d\n",a);
			else
				printf("min=%d\n",b);
		break;
	case 2: n==2;
		printf("enter the numbers a,b,c:");
		scanf("%d %d %d",&a,&b,&c);
		if(a>b&&a>c)
			printf("max=%d\n",a);
		else if(b>c)
			printf("max=%d\n",b);
		else
			printf("max=%d\n",c);
		if(a<b&&a<c)
			printf("min=%d\n",a);
		else if(b<c)
			printf("min=%d\n",b);
		else
			printf("min=%d\n",c);
	break;
	case 3: n==3;
		printf("enter the numbers a,b,c,d");
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(a>b&&a>c&&a>d)
			printf("max=%d\n",a);
		else if(b>c&&b>d)
			printf("max=%d\n",b);
		else if(c>d)
			printf("max=%d\n",c);
		else
			printf("max=%d\n",d);
		if(a<b&&a<c&&a<d)
			printf("min=%d\n",a);
		else if(b<c&&b<d)
			printf("min=%d\n",b);
		else if(c<d)
			printf("min=%d\n",c);
		else
			printf("min=%d\n",d);
}		
return 0;
}