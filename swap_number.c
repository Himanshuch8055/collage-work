#include <stdio.h>

int main ()
{
    int a=2;
    int b=3;

    printf("value of a and b %d and %d\n", a , b);

    int temp=a;
    a=b;
    b=temp;

    printf("value of a and b %d and %d", a , b);

    return 0;
}