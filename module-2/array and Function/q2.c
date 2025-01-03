//2. WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include <stdio.h>
int main()
{	
	int num1,num2,choice,ans;
	
	printf("Enter the value of num1=");
	scanf("%d",&num1);
	
	printf("Enter the value of num2=");
	scanf("%d",&num2);
	
	printf("\n 1. Addition");
	printf("\n 2. Subtraction");
	printf("\n 3. Multiplication");
	printf("\n 4. Division");
	
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: 
		ans = num1 + num2 ;
		printf("\nAnswer of %d and %d is = %d",num1,num2,ans);
		break;
		
		case 2:
		ans = num1 - num2 ;
		printf("\nAnswer of %d and %d is = %d",num1,num2,ans);		
		break;
		
		case 3: 		
		ans = num1 * num2 ;
		printf("\nAnswer of %d and %d is = %d",num1,num2,ans);		
		break;
		
		case 4:		
		ans = num1 / num2 ;
		printf("\nAnswer of %d and %d is = %d",num1,num2,ans);		
		break;
		
		default : 
		
		printf("Invalid choice:");
	}

 	return 0;
}

