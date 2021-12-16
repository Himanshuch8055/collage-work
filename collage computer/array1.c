#include <stdio.h>

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the arr: ");
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        printf("reverse is: %d\n", arr[j] - 1);
    }

    return 0;
}