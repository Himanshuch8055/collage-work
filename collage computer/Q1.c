#include <stdio.h>
int main()
{
    int a;
    char b;
    float c;

    printf("Enter the value of b:\n");
    scanf("%c", &b);

    printf("Enter the value of a:\n");
    scanf("%d", &a);

    printf("Enter the value of c:\n");
    scanf("%f", &c);

    printf("The value of int is: %d\n", a);
    printf("The value of char is: %c\n", b);
    printf("The value of float is: %f\n", c);

    return 0;
}