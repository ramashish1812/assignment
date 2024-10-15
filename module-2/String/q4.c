//4. Write a program in C to count the total number of words in a string. 
#include<stdio.h>
int main()
{
	char str[100];
	int i,words=0;
	printf("Enter string: ");
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]==' ')
		{
			words++;
		}
	}
	printf("\nTotal words in string = %d",words+1);
	return 0;
}

