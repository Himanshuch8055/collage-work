#include <stdio.h>
int lasgest();
int main()
{
    int array[10], size, i, largest;
    printf("Enter the size of an Array: ");
    scanf("%d", &size);
    printf("\n");
    printf("------:Enter the %d elements of an Array:------- \n", size);
    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("Enter the %d element of an Array : ", i);
        scanf("%d", &array[i]);
    }
    largest = array[0];
    for (i = 1; i < size; i++)
    {
        if (largest < array[i])
        {
            largest = array[i];
        }
    }

    printf("\nLargest element in an Array = %d", largest);

    return 0;
}