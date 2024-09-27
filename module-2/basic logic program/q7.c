//7.Find area of Rectangle Formula : A=wl
#include<stdio.h>
int main()
{
	float area=1,w,l;
	printf("\nEnter the value of width = ");
	scanf("%f",&w);
	printf("\nEnter the value of length = ");
	scanf("%f",&l);
	area=w*l;
	printf("\nArea of Rectangle = %.2f",area);	
	return 0;
}
