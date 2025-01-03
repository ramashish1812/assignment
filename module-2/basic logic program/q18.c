//18. Calculate person’s Annual salary
#include <stdio.h>
int main()
 {
    float Salary,annualSalary;  

    printf("Enter the salary = ");
    scanf("%f", &Salary);

    annualSalary = Salary * 12;

    printf("\nThe annual salary is: %.2f", annualSalary);

    return 0;
}

