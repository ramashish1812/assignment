//8.Find circumference of Rectangle formula : C = 4 * a 
#include<stdio.h>
int main()
{
	float circumference=1,w,l;
	printf("\nEnter the value of width = ");
	scanf("%f",&w);
	printf("\nEnter the value of length = ");
	scanf("%f",&l);
	circumference=(2*(w+l));
	printf("\nArea of Rectangle = %.2f",circumference);	
	return 0;
}
