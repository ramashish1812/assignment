//5. Find Area of Cube formula : a = 6a2
#include<stdio.h>
int main() 
{
    float side,area;

    printf("Enter the length of a side of the cube: ");
    scanf("%f", &side);

    area = 6 * (side * side); 

    printf("\nArea of the cube: %.2f", area);

    return 0;
}
