//21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
#include <stdio.h>
int main()
 {
    int a=10;
	int b=20;
	int c;
	
	printf("\nvalue of a befor swapping = %d",a);
	printf("\nvaluve of b befor swapping = %d",b);
	
	c = a;
	a = b;
	b = c;
	
	printf("\nvalue of a after swapping = %d",a);
	printf("\n value of b after swaping = %d",b);
	
    return 0;
}

