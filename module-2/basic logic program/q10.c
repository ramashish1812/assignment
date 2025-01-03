//10.Find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main()
{
	int w,h,l;
	float area=1;
	printf("\nEnter the value of width = ");
	scanf("%d",&w);
	printf("\nEnter the value of length = ");
	scanf("%d",&l);
	printf("\nEnter the value of height = ");
	scanf("%d",&h);
	
	area=2*(w*l+h*l+h*w);
	
	printf("\nArea of a Rectangular Prism = %.2f",area);	
	return 0;
}
