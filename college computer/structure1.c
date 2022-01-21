#include <stdio.h>
struct complexnum
{
    int realnum;
    float imagnum;
};

int main()
{
    struct complexnum a, b, c;
    {
        printf("Enter the real value of first part: ");
        scanf("%d", &a.realnum);
    };

    printf("Enter the image value of second part: ");
    scanf("%f", &a.imagnum);

    printf("The output of complex number is %d+i%.1f", a.realnum, a.imagnum);

    return 0;
}