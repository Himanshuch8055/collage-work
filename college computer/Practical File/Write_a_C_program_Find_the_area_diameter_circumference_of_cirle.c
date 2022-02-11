#include <stdio.h>

int main()
{
    int radius, diameter;
    float circumference, area;
    printf("Enter the radius of circle : ");
    scanf("%d", &radius);
    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;
    printf("The Diameter of Circle is : %d\n", diameter);
    printf("The circumference of Circle ids : %0.2f\n", circumference);
    printf("The area of Circle is : %0.2f\n", area);
    return 0;
}