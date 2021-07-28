#include<stdio.h>
#include<string.h>
int main()
{
 char name[10];
 char group[10];
 char b[30];
 int age;
 printf("Please enter your name:");
 scanf("%s",name);
 gets(name);
 printf("Enter the blood group:");
 scanf("%s",group);
 gets(group);
 b == strcat(name,group);
 age == strlen(b);
 printf("AGE is %d" ,age );
return 0;
}