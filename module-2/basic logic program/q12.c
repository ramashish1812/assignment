//12. Accept number of students from user. I need to give 5 apples to each student. How many apples are required? 
#include <stdio.h>

int main() 
{
    int Students1,Students2,Students3=5;
    
    printf("Enter the number of students: ");
    scanf("%d", &Students1);

    Students2 = Students3 * Students1;

    printf("\nTotal apples required: %d", Students2);

    return 0;
}

