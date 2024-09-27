//10.Find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main()
{
	float area=1,w,l,h;
	printf("\nEnter the value of width = ");
	scanf("%f",&w);
	printf("\nEnter the value of length = ");
	scanf("%f",&l);
	printf("\nEnter the value of height = ");
	scanf("%f",&h);
	area=2*(w*l+h*l+h*w);
	printf("\nArea of a Rectangular Prism = %.2f",area);	
	return 0;
}
