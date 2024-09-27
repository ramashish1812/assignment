//12. Accept number of students from user. I need to give 5 apples to each student. How many apples are required? 
#include <stdio.h>

int main() 
{
    int number_Of_Students;
    int apples_Per_Student = 5;
    int total_Apples;

    printf("Enter the number of students: ");
    scanf("%d", &number_Of_Students);

    total_Apples = number_Of_Students * apples_Per_Student;

    printf("\nTotal apples required: %d", total_Apples);

    return 0;
}

