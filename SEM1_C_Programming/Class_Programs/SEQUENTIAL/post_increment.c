//Q.14 Post Increment
#include <stdio.h>
int main()
{
    int a=5, b;
    b=a++; // b=a (old) and then a=a+1
    printf("\n The value of a : %d and b : %d",a,b); // a=6, b=5
    return 0;
}