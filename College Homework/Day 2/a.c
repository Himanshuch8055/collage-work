#include <stdio.h>
int main()
{
    int x, y;
    int *ptr;
    x = 10;
    ptr = &x;
    y = *ptr;
    printf("%d= %u\n", x, &x);
    printf("%d=%u", *&x, &x);
    printf(" ");
    printf(" ");
    printf(" ");
    printf(" ");
    printf(" ");
    printf(" ");
    printf(" ");
    printf(" ");
    printf(" ");
    printf(" ");
    return 0;
}