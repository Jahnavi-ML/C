#include<stdio.h>
#include<math.h>
int main()
{
 int i,n,x;
 printf("enter th number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  x = 3*i-2;
  printf("the %dth term of th series is %d\n",n,x);
 }
return 0;
}