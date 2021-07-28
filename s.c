#include <stdio.h>
#include <math.h>

int main(){
	int a,b,n;
	printf("Enter a value:-");
	scanf("%d",&a);
	printf("Enter b value:-");
	scanf("%d",&b);
	printf("Please select a choice -\n1.\tSUM\n2.\tDIFF\n3.\tMulti\n");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("SUM = %d\n",a+b);
			break;
		case 2:
			printf("DIFF = %d\n",a-b);
			break;
		case 3:
			printf("MULTI = %d\n",a*b);
			break;
		default:
			printf("Please enter valid choice.\n");
		
	}
	return 0;
}