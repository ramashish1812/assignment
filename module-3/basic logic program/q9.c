//9. Find circumference of Triangle formula : triangle = a + b + c 
#include<stdio.h>
int main()
{
	int a,b,c;
	float circumference;
	printf("\nenter the value of side 1 = ");
	scanf("%d",&a);
	printf("\nenter the value of side 2 = ");
	scanf("%d",&b);
	printf("\nenter the value of side 3 = ");
	scanf("%d",&c);
	
	circumference=a+b+c;
	
	printf("\ncircumference of Triangle = %.2f",circumference);
	
	return 0;
}
