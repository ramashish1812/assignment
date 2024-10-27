//1. Write a program in C to find the length of a string without using library functions
#include<stdio.h>
int str_len(char str[100]);

int main()
{
	
  char str[100];
  printf("Enter a string = ");
  gets(str);
  
  str_len(str);
  
  printf("lenght of the string is = %d\n  ",  str_len(str));
  return 0;
}

int str_len(char str[100])
{
	int len=0;
	
	while (str[len]!='\0')
	{
	len ++;
	}
	return len;
}


