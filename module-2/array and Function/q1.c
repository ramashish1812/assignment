//1. Write a program to find out the max number from given array using function 
#include <stdio.h>
void max();
int main()
{
	max(); 
}

void max()
{
	int number[100],size,i,max=0;
	printf("Enter the size :");
	scanf("%d",&size);
	
	for(i=0 ; i < size ;i++)
	{
		printf("\nEnter the number :");
		scanf("%d",&number[i]);
	}
	
	for(i=0 ; i < size ; i++)
	{
		printf("%d \n",number[i]);
		
		if(number[i] > max)
		{
			max = number[i];
		}
		
	}
	
		printf("\nThe maximun value is = %d",max);
}

