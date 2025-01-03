//10. Write a program in C to extract a substring from a given string
#include<stdio.h>
void findSubstring(int index,int length,char str[])
{
	int i=0;
	char substring[200]; 
	
	while(i<length)
	{
		substring[i] = str[index+i];
		i++;	
	}
	printf("\n substring = %c",substring);
}
main()
{
	char name[20];
	int index, length;
	printf("\nEnter a string : ");
	gets(name);
	printf("\n name = %c",name);

	printf("\nEnter index position which you want : ");
	scanf("%d",&index);

	printf("\nEnter length of sub string : ");
	scanf("%d",&length);

	findSubstring(index,length,name);
}

