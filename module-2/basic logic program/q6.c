//6. Find area of Triangle Formula : A = 1/2 × b × h 
#include<stdio.h>
int main()
{
	float area,b,h;
	printf("\nenter the value of base = ");
	scanf("%f",&b);
	printf("\nenter the value of height = ");
	scanf("%f",&h);
	
	area=(0.5)*b*h;
	printf("\area of triangle = %.2f",area);
	
	return 0;
}
