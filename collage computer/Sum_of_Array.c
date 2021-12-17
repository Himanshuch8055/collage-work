#include <stdio.h>

int main()
{

    int arr[10], i, s = 0;
    printf("Enter numbers:\n");


    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        s = s + arr[i];
    }


    printf("\nNumbers Stored in Array : \n");

    
    for (i = 0; i < 10; i++)
        printf("a[%d]=%d\n", i, arr[i]);
    printf("\nSum of Integer Numbers : %d", s);































    // int array[10], sum;
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("Array is %d: ", i);
    //     scanf("%d", &array[i]);
    // }
    // sum=

    // printf("Sum is: %d")

    // for (int j = 0; j <= 10; j++)
    // {
    //     printf("Sum is: ");

    // }

    return 0;
}