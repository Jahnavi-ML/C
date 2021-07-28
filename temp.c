#include<stdio.h>
#include<math.h>
int main()
{
 float F,C;
 printf("enter the Fahrenheit value F");
 scanf("%f",&F);
 C = (F-32)*5/9;
 printf("Celsius is %f ",C);
return 0;
}