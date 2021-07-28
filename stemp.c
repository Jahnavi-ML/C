#include<stdio.h>
#include<math.h>
int main()
{
 int n;
 float t;
 printf("please the type of temperature scale that to be converted:\n1.\tFahrenheit value\n2.\tcelsius value");
 scanf("%d",&n);
 switch(n)
 {
		case 1: 
				printf("enter the Fahrenheit value F");
				scanf("%f",&t);
				t = (t-32)*5/9;
				printf("Celsius is %f ",t);
				break;
		case 2: 
				printf("enter the celsius value C");
				scanf("%f",&t);
				t = (9*t/5)+32;
				printf("Fahrenheit value is %f ",t);
 }
return 0;
}