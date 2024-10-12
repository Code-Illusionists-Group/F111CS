//Q.16 Circumference and area of circle
#include <stdio.h>
#define pi 3.14 // constant
int main()
{
    //float pi=3.14;
    float r,c,a;
    printf("\n Enter radius of circle ");
    scanf("%f",&r);
    a=pi*r*r;
    c=2*pi*r;
    printf("\n Area of circle = %f and Circumference=%f",a,c);
    return 0;
}