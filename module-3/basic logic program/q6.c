//6. Find area of Triangle Formula : A = 1/2 × b × h 
#include<stdio.h>
int main()
{ 
	int b,h;
	float area;
	printf("\nenter the value of base = ");
	scanf("%d",&b);
	printf("\nenter the value of height = ");
	scanf("%d",&h);
	
	area=(0.5)*b*h;
	printf("\area of triangle = %.2f",area);
	
	return 0;
}
