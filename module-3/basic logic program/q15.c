//15.Convert school’s name in abbreviated form 
#include<stdio.h>
#include<string.h>
int main()
{ 	
	int i,j=0;
	char name[100],abr[100];
	
	printf("\nEnter the school name = ");
	gets(name);
	
	printf("\nOriginal school name = %s",name);
	
	for(i=0;name[i]!='\0';i++)
	{
		if((i==0 || name[i-1]==' ') && name[i]!=' ')
		{
			abr[j] = name[i];
			j++;
		}
	}
	strupr(abr);
	printf("\nAbbriviated form = %s",abr);
	return 0;
}
