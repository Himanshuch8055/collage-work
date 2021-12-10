#include<stdio.h>

int main ()
{
    int Hindi, English, Maths, Science, Sum, aveg;

    printf("Hindi: ");
    scanf("%d", &Hindi);

    printf("English: ");
    scanf("%d", &English);

    printf("Maths: ");
    scanf("%d", &Maths);

    printf("Science: ");
    scanf("%d", &Science);

    Sum=(Hindi+English+Maths+Science);
    printf("Your sum Is: %d\n", Sum);

    aveg=(Sum/4);
    printf("your aveg. is: %d\n", aveg);

    if (33<aveg)
    {
        printf("");
    }
    
    




    return 0;
}