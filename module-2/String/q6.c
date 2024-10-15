//6. Write a program in C to count the total number of alphabets, digits and special characters in a string. 
#include <stdio.h>
int main() 
{
    char str[100];
    int alphabets = 0, digits = 0, specialChars = 0;
    int i = 0;


    printf("Enter a string: ");
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

    
    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specialChars);

    return 0;
}

