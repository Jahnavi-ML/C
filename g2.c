#include<stdio.h>
#include<math.h>
int main()
{
 int a,b;
 printf("enter a value:- ");
 scanf("%d",&a);
 printf("enter b value:- ");
 scanf("%d",&b);
 printf("The large number is: %d",a>b?a:b);
return 0;
}