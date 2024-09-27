//11.WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main() 
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    (number % 2 == 0) ? printf("\nThe number %d is even", number) : printf("\nThe number %d is odd", number);

    return 0;
}

