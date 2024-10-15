//8.1  WAP to reverse a string and check that the string is palindrome or not
#include <stdio.h>
int main()
{
	char str[100],i , rev[100],len=0,temp,count;
	
	printf("Enter the string= ");
	gets(str);
	
	for(i=0 ; str[i]!='\0' ; i++)
	{
		len++;
	}
	
	temp = len;
	
	for(i=0 ; str[i]!='\0' ; i++)
	{
		rev[i] = str[len-1];
		len--;
	}	
	
	printf("reversed string:-");
	
	for(i=0 ; i<temp ; i++)
	{
		printf("%c",rev[i]);
	}
	
	for(i=0 ; str[i]!= '\0' ; i++)
	{
		if(str[i] != rev[i])
		{
			count++;
		}
	}
	
	if(count == 0)
	{
		printf("\npalindrome string");
	}
	else
	{
		printf("\nnot palindrome string");
	}
	
	return 0;
}


