#include<stdio.h>
#include<math.h>
int main()
{
 int n,i;
 printf("enter the number:");
 scanf("%d",&n);
 do
 {
  if(i%2 != 0)
   printf("%d\n",i);
   i++;
 }
 while(i<n);
return 0;
}