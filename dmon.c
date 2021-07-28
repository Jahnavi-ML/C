 #include<stdio.h>
 #include<math.h>
 int main()
 {
  int N;
  printf("enter the month ");
  scanf("%d",&N);
  if (N ==1||N==3||N==5||N==7||N==8||N==10||N==12)
	printf("number of days in %d are 31 days ",N );
  else 
	{
		if(N==2)
			printf("number of days in %d are 28 days or 29 days",N);
		else 
			{
				if(N==2||N==4||N==6||N==9||N==11)
					printf("number of days in %d are 30 days",N);
				else
					printf("it is not a valid month");
			}
	}		
 return 0;

 }