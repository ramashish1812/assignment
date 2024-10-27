//7. Accept marks from user and check pass or fail
#include<stdio.h>
int main() 
{
    float marks;
    float passingMarks = 33.0; 

    printf("Enter your marks: ");
    scanf("%f", &marks);

    if (marks >= passingMarks) 
	{
        printf("\nYou have passed.");
    } 
	else 
	{
        printf("\nYou have failed.");
    }

    return 0;
}

