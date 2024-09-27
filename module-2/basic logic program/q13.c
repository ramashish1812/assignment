//13. Find character value from ascii 
#include <stdio.h>
int main()
 {
    int ascii_value;

    printf("Enter an ascii value (0-127): ");
    scanf("%d", &ascii_value);

    if (ascii_value < 0 || ascii_value > 127)
	 {
        printf("\nPlease enter a valid ascii value between 0 and 127");
     } 
	 else
	  {
        char character = (char)ascii_value;
        printf("\nThe character for ascii value %d is: '%c' ", ascii_value, character);
      }

    return 0;
}

