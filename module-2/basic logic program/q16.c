//16.Convert country’s name in abbreviate form 
#include<stdio.h>
#include<string.h>
int main()
{
	char countryname[100],abr[100];
	int i,j=0;
	printf("\nEnter the country's' name = ");
	gets(countryname);
	
	printf("\nOriginal country name = %s",countryname);
	
	for(i=0;countryname[i]!='\0';i++)
	{
		if((i==0 || countryname[i-1]==' ') && countryname[i]!=' ')
		{
			abr[j] = countryname[i];
			j++;
		}
	}
	strupr(abr);
	printf("\nAbbriviated form = %s",abr);
	return 0;
}
