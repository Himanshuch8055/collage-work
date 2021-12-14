#include <stdio.h>

int main()
{
    int arr[10], i;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the arr: ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("your arr is: %d\n", i);
    }

    return 0;
}