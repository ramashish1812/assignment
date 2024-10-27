//7.Find area of Rectangle Formula : A=wl
#include<stdio.h>
int main()
{
	int w,l;
	float area=1;
	printf("\nEnter the value of width = ");
	scanf("%d",&w);
	printf("\nEnter the value of length = ");
	scanf("%d",&l);
	
	area=w*l;
	
	printf("\nArea of Rectangle = %.2f",area);	
	return 0;
}
