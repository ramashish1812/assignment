//6. Write a program in C to count the total number of alphabets, digits and special characters in a string. 
#include <stdio.h>
int main() 
{
    int i = 0,alphabets = 0,digits = 0,specialChars = 0;
    char str[100];

    printf("Enter a string = ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') 
	{
    
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		 {
            alphabets++;
        } 
        
        else if (str[i] >= '0' && str[i] <= '9')
		 {
            digits++;
        } 
        else
		 {
            specialChars++;
        }
        i++;
    }

    
    printf("\nAlphabets: %d", alphabets);
    printf("\nDigits: %d", digits);
    printf("\nSpecial characters: %d", specialChars);

    return 0;
}

