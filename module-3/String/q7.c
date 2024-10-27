//7. Write a program in C to copy one string to another string. 
int main()
{
	int i;
	char str1[100],str2[100];
		
	printf("Enter a string :-");
	gets(str1);
	
	for (i=0; str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]= '\0';
	
	printf("Copied string : %c ",str2);
	return 0;
	
}

