//3. WAP to Find Area And Circumference of Circle
#include<stdio.h>
int main()
{
    float PI = 3.14;
    float radius,area,circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("\nArea of the circle: %.2f", area);
    printf("\nCircumference of the circle: %.2f", circumference);

    return 0;
}
