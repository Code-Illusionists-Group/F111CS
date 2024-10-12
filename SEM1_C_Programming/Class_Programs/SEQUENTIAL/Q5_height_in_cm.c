//Q.5 WAP to find your height in cm

#include <stdio.h> // pre porocessor directive
#define inch_to_cm 2.54
int main()
{
    int feet,inch,cm; //variable declaration  
    printf("\n Enter height in feet and inches ="); 
    scanf("%d %d",&feet,&inch);// User input, %f placeholder (float)
    cm=(feet*12+inch)*inch_to_cm; // calculation
    printf("\n Your height is = %d cm",cm); // output
    return 0;
}