#include<stdio.h>

int main ()
{
    int a, b, c, d, e, rev;

    printf("Num is: ");
    scanf("%d",&a);

    b=a%10;  
    c=a/10; 
    d=c%10;
    e=c/10;

    rev=(b*100+d*10+e*1);

    printf("Now num is %d\n", rev);

    
    return 0;
}