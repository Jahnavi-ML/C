#include<stdio.h>
#include<math.h>
int main()
{
 char ch;
 printf("enter the character:");
 scanf("%c",&ch);
 //printf("%d",ch);
 if(ch>=65&&ch<=90)
	printf(" UPPER CASE ");
 else
	printf(" LOWER CASE ");
return 0;
}
	