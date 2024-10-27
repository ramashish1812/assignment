//20. Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.
#include <stdio.h>
int main()
 {
    float monthlySalary,insurance,Installment,remainingSalary; 
    
    printf("Enter the monthly salary = ");
    scanf("%f", &monthlySalary);

    insurance = monthlySalary * 0.10; 
    Installment = monthlySalary * 0.10;   
    
    remainingSalary = monthlySalary - (insurance + Installment);

    printf("\nInsurance deducted = %.2f", insurance);
    printf("\ninstallment deducted = %.2f", Installment);
    printf("\nRemaining salary = %.2f", remainingSalary);

    return 0;
}

