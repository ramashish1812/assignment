//19.Calculate compound interest 
#include <stdio.h>
#include <math.h>

int main()
 {
 	int time,n; 
    float principal,rate,Interest,amount;                   
    
    printf("Enter the principal amount = ");
    scanf("%f", &principal);
    printf("Enter the rate of interest = ");
    scanf("%f", &rate);
    printf("Enter the time = ");
    scanf("%d", &time);
    printf("Enter the number of times interest is per year = ");
    scanf("%d", &n);
    
    amount = principal * pow((1 + rate / (n * 100)), n * time);
    Interest = amount - principal;

    printf("\nTotal amount after %.2f years: %.2f", (float)time, amount);
    printf("\ninterest: %.2f", Interest);

    return 0;
}

