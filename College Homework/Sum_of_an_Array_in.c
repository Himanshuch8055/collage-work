#include <stdio.h>

int main()
{
    int a[10], size, sum = 0;
    printf("Enter the size of an Array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("element %d : ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
        sum += a[i];
    printf("Sum is : %d\n", sum);
    return 0;
}
