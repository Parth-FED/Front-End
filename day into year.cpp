#include<stdio.h>

int main()
{
	int nomberofdays,days,years;
	printf("\n enter the nomber of day:");
	scanf("%d",&nomberofdays);
	
	years=nomberofdays/365;
	days=(nomberofdays%365)%365;
	
	printf("\n year=%d",years);
	printf("\n days= %d",days);
	
	return 0;

}
