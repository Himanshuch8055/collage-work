#include <stdio.h>

int main()
{
    int array[7];
    int temp;

    for (int i = 1; i <= 7; i++)
    {
        printf("Array is %d: ", i);
        scanf("%d", &array[i]);
    }

     for (int i = 1; i < 7 / 2; i++)
    {
        
        temp = array[i];
        array[i] = array[6 - i];
        array[6 - i] = temp;
    }

    for (int i = 1; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, array[i]);
    }

    return 0;
}