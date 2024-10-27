//17. Calculate person’s insurance premium based on salary 
#include <stdio.h>
int main() 
{
    float salary,premium,Rate;             
	
	printf("Enter the salary = ");
    scanf("%f", &salary);
    
    if (salary < 30000)
	 {
        Rate = 0.05; 
   	 } 
	else if (salary < 60000) 
	 {
        Rate = 0.07; 
     }
	 else
	 {
        Rate = 0.10; 
   	 }

    premium = salary * Rate;

    printf("\nThe insurance premium is: %.2f", premium);

    return 0;
}
