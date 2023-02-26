#include<stdio.h>

int main()
{
	float width,length,area;
	
	printf("\n enter the width of a rectangle : ");
	scanf("%f" ,&width);
	
	printf("\n enter the length of a rectangle : ");
	scanf("%f" ,&length);
	
	area=length*width;
	
	printf("\n the area of a rectangle=%.2f",area);
	
	return 0;
}
