//8. WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include<stdio.h>
int main()
{
	float height;
	printf("Enter your height = ");
	scanf("%f",&height);
	
	if(height<4.5)
	{
		printf("\nPerson is small");
	}
	else if(height>=4.5 && height<=6)
	{
		printf("\nPerson is Average");
	}
	else
	{
		printf("\nPerson is Tall");
	}
	
	return 0;
}
