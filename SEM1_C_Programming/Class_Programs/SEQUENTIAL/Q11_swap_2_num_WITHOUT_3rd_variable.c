//Q.11 Swapping two numbers without using third variable
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("\n Enter 2 num");
    scanf("%d %d",&a, &b);
    printf("\n Before swapping a= %d and b= %d",a,b); // a=5 b=10
    a=a+b; // a=15 b=10
    b=a-b; // a=15 b=5
    a=a-b; // a=10 b=5
    printf("\n After swapping a= %d and b= %d",a,b);

    return 0;
}