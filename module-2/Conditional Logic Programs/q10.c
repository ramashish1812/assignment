//10.WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
int main() 
{
    int num;

    printf("Enter a number = ");
    scanf("%d",&num);

    if (num > 0) 
	{
        printf("\nThe number %d is positive.",num);
    } 
	else if (num < 0) 
	{
        printf("\nThe number %d is negative.",num);
    } 
	else 
	{
        printf("\nThe number is zero.");
    }

    return 0;
}

