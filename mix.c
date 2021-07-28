#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c,d,e;
float f,g;
switch(operator)
{
case-1 '+':	
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
c=a+b;
printf("the value of c:%d \n",c);
break;
case-2 '-':
d=a-b;
printf("the value of d:%d \n",d);
break;
case-3 '*':
e=a*b;
printf("tne value of e:%d \n",e);
break;
case-4 '/':
f=a/b;
printf("the value of f:%0.2f \n",f);
break;
case-5 '%':
g=a%b;
printf("the value of g:%f",g);
break;
}
return 0;
}