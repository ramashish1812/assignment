//8.Find circumference of Rectangle formula : C = 4 * a 
#include<stdio.h>
int main()
{ 	
	int w,l;
	float circumference=1;
	printf("\nEnter the value of width = ");
	scanf("%d",&w);
	printf("\nEnter the value of length = ");
	scanf("%d",&l);
	
	circumference=(2*(w+l));
	
	printf("\nArea of Rectangle = %.2f",circumference);	
	return 0;
}
