#include<stdio.h>

int main()
{
	float principal,time,rate,SI;
	
	printf("\n enter principal (amount): ");
	scanf("%f",&principal);
	
	printf("\n enter time: ");
	scanf("%f",&time);
	
	printf("\n enter rate: ");
	scanf("%f",&rate);
	
	SI=(principal*time*rate)/100;
	
	printf("\n simple interest=%f", SI);
	
	return 0;
	
}
