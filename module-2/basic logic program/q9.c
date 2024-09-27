//9. Find circumference of Triangle formula : triangle = a + b + c 
#include<stdio.h>
int main()
{
	float circumference,a,b,c;
	printf("\nenter the value of side 1 = ");
	scanf("%f",&a);
	printf("\nenter the value of side 2 = ");
	scanf("%f",&b);
	printf("\nenter the value of side 3 = ");
	scanf("%f",&c);
	
	circumference=a+b+c;
	printf("\ncircumference of Triangle = %.2f",circumference);
	
	return 0;
}
