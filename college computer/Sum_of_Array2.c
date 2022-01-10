#include <stdio.h>

void main()
{
    int a[100];
    int i, n, sum = 0;

    printf("How many numbers do you want to sum:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("element %d : ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }

    printf("Sum is : %d\n", sum);
}
