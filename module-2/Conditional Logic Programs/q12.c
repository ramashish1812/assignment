//12.WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
int main() 
{
    int num1, num2, num3, max;

    printf("\nEnter three integers:");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("Number 3: ");
    scanf("%d", &num3);

    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("\nThe maximum number is: %d", max);

    return 0;
}

