//8. Write a program in C to count the total number of vowels or consonants in a string. 
#include <stdio.h>
int main() 
{
	int i,vowel = 0,consonant = 0;
    char str[100];

    printf("Enter a string: ");
	gets(str);
    for (i = 0; str[i] != '\0'; i++)
	 {
        char ch = str[i];

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
			{
                vowel++;  
            }
            else
            {
            	consonant++;
			}
    }
    
    printf("\nTotal number of vowels: %d", vowel);
    printf("\nTotal number of consonants: %d", consonant);

    return 0;
}

