//2. Write a program in C to separate individual characters from a string. 
#include<stdio.h>
int main()
{	
	int i=0;
	char str[100];
	
	printf("Enter a string = ");
	scanf(" %c",str);
	
	while (str[i]!='\0')
	{
		printf("\ncharacter at position %d: %c",i ,str[i]);
		i++;
	}
	return 0;
}

