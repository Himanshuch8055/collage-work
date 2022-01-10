#include <stdio.h>
int passarray(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value at %d is %d.\n", i, array[i]);
    }

    return 0;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 4, 5};
    passarray(arr);
    return 0;
}