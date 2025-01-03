//9. C Program to Check Uppercase or Lowercase or Digit or SpecialCharacter
#include<stdio.h>
int main() 
{
    char ch;

    printf("Enter a character = ");
    scanf("%c", &ch);

    if (isupper(ch)) 
	{
        printf("\n%c is an uppercase letter.",ch);
    } 
	else if (islower(ch)) 
	{
        printf("\n%c is a lowercase letter.",ch);
    } 
	else if (isdigit(ch)) 
	{
        printf("\n%c is a digit.",ch);
    }
	else 
	{
        printf("\n%c is a special character.",ch);
    }

    return 0;
}

