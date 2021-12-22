#include <stdio.h>

int main()
{
    int rev, c;
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter the array %d: ", i);
        scanf("%d", &rev);
        c = rev;
        printf("%d\n", c);
        for (int j = 10; j >=1 ; j++)
        {
            printf("%d", c);
        }
        
    }
    // printf("\n");
    // printf("After the reversing:- \n");
    // printf("\n");
    // for (int j = c ; j > 1; j--)
    // {
    //     printf("%d", c);
    // }

    // for (int j = 10; j >= 1; j--)
    // {
    //     printf("Reverse of array is %d: \n", j);
    // }

    return 0;
}