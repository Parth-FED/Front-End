#include<stdio.h>

int main()
{
	int r,l,b,h,circle,rect,tri;
	printf("enter the value of r: ");
	scanf("%d",&r);
	
	circle=3.14*r*r;
		
		printf("enter the value of l and b: ");
		scanf("%d%d",&l,&b);
		rect=l*b;
		
		printf("enter the value of b and h:");
		scanf("%d%d",&b,&h);
		tri=0.5*b*h;
		
		printf("circle%d \nrect%d \tri%d",circle,rect,tri);
		
}
