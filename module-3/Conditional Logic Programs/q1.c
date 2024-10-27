//1.Write a C program to accept two integers and check whether they are equal or not
#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Enter the first integer =  ");
    scanf("%d", &num1);
    printf("Enter the second integer = ");
    scanf("%d", &num2);

    if (num1 == num2) 
	{
        printf("\nThe integers are equal.");
    } 
	else 
	{
        printf("\nThe integers are not equal.");
    }

    return 0;
}

