#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,n;
 printf("please enter tha choice- \n1.\tSUM\n2.\tDIFF\n3.\tMULTI\n4.\tDIV\n5.\tREM\n");
 scanf("%d",&n);
 printf("enter the a value:");
 scanf("%d",&a);
 printf("enter the b value:");
 scanf("%d",&b);
 printf("n=%d",n);
 switch(n)
      {
	   case 1 : 
			printf("SUM = %d\n",a+b);
			break;
		case 2 :
			printf("DIFF = %d\n",a-b);
			break;
		case 3 :
			printf("MULTI = %d\n",a*b);
			break;
		case 4 :
			printf("DIV = %d\n",a/b);
			break;
		case 5 :
			printf("REM = %d\n",a%b);
			break;
		default :
			printf("please enter a valid choice");
	
		
	  }
	  return 0;
}