#include<stdio.h>

int main()
{
	float base,height,area;
	
	printf("\n enter the base oa a triangle : ");
	scanf("%f",&base);
	
	printf("\n enter the height oa a triangle : ");
	scanf("%f",&height);
	
	area=(base*height)/2;
	
	printf("\n the area of triangle=%.2f\n",area);
	
	return 0;
	
}
