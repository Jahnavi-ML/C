#include<stdio.h>
#include<math.h>
int main()
{
 int n,i;
 printf("enter the number:");
 scanf("%d\n",&n);
 do
 {
  if(i%2==0)
   printf("EVEN NUMBER");
  else
   printf("ODD NUMBER");
  i++;
 }
 while(i<n);
return 0;
}