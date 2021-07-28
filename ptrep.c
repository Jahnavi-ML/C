#include <stdio.h>
#include<math.h>
int main()
{
 float a,b,c,d,peri;
 printf("enter the side a value of a trapezium:");
 scanf("%f",&a);
 printf("enter the side b value of a trapezium:");
 scanf("%f",&b);
 printf("enter the side c value of a trapezium :");
 scanf("%f",&c);
 printf("enter the side d value of a trapezium :");
 scanf("%f",&d);
 peri= a+b+c+d;
 printf("perimetr of trapezium is :%f",peri);
 return 0;
}