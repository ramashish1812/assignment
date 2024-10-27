//24.Accept 5 employees name and salary and count average and total salary 
#include <stdio.h>
int main()
{
	 int emp1,emp2,emp3,emp4,emp5,totalsalary;
	 float average;
	 
	 printf("Enter Salary of Employee 1 = ");
	 scanf("%d",&emp1);	
	 printf("Enter Salary of Employee 2 = ");
	 scanf("%d",&emp2);
	 printf("Enter Salary of Employee 3 = ");
	 scanf("%d",&emp3);	 
	 printf("Enter Salary of Employee 4 = ");
	 scanf("%d",&emp4);	 
	 printf("Enter Salary of Employee 5 = ");
	 scanf("%d",&emp5); 
	 	 
	 totalsalary = emp1 +emp2 +emp3 +emp4 +emp5; 
	 average = (float)totalsalary/5; 
	 
	 printf("\nValue of total salary is = %d", totalsalary);
	 printf("\nAverage value is = %.2f",average);
	 
	 return 0;
	 
}

