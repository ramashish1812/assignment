//10.WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
int main() 
{
    float number;

    printf("Enter a number: ");
    scanf("%f", &number);

    if (number > 0) 
	{
        printf("\nThe number %.2f is positive.", number);
    } 
	else if (number < 0) 
	{
        printf("\nThe number %.2f is negative.", number);
    } 
	else 
	{
        printf("\nThe number is zero.");
    }

    return 0;
}

