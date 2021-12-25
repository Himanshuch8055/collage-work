#include <stdio.h>

int main()
{
    int a;
    char b;
    float c;
    double d;

    // printf("Enter the value of a:\n");
    // scanf("%d", &a);
    // printf("Enter the value of b:\n");
    // scanf("%c", &b);
    // printf("Enter the value of c:\n");
    // scanf("%f", &c);

    // printf("%lu\n", sizeof(int));

    printf("The size of int is: %lu\n", sizeof(a));
    printf("The size of char is: %lu\n", sizeof(b));
    printf("The size of float is: %lu\n", sizeof(c));
    printf("The size of double is: %lu\n", sizeof(d));

    return 0;
}