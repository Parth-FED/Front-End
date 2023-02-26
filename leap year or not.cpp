//leap year or not

#include<stdio.h>
int main()
{
	int n;
	printf("\n enter the any year:");
	scanf("%d",&n);
	
	if(n%4==0||n%400==0||n!=0100==0)
	{
		printf("it is a leap year ");
	}
	else
	{
		printf("it is not a leap year");
	}
}
