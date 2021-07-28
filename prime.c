#include<stdio.h>
#include<math.h>
int main()
{
 int i,n;
 printf("enter the number:");
 scanf("%d",&n);
 for(i=2;i<n;i++)
  {
   if(n%i != 0)
    printf(" the %d is prime number\n",n);
  }
return 0;
}