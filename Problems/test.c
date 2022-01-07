#include<stdio.h>
int main()
{
    int n,fact;
    printf("Enter the Number");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");
    for(int i=1; i<=n; i++)
    {
        fact=0;
        for(int j=1; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("%d " ,i);
    }
    return 0;
}