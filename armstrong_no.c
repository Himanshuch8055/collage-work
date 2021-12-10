#include <stdio.h>

int main()
{
    int ad, a, a1, a2, a3, b, c, d, rev;

    printf("\n\t Enter the value of a: ");
    scanf("%d", &ad);

    a = ad;

    a1 = a % 10;
    b = a / 10;

    a2 = b % 10;
    c = b / 10;

    a3 = c % 10;
    d = c / 10;

    rev = a1 * 100 + a2 * 10 + a3 * 1;

    printf("\n\t Reverse of a no.: %d,rev");

//    arm = a1 * a1 * a1 * a2 * a2 * a2 * a3 * a3 * a3;

//     printf("\n\t Armstrong no.: %d", arm);

//     if (ad == arm)
//     {
//         printf("\n\t Num is armstrong \n");
//     }
//     else
//     {
//         printf("\n\t Num is not armstrong:");
//     }

    return 0;
}