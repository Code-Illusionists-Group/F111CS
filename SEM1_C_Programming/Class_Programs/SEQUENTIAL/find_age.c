//Q.6 WAP to find your age
#include <stdio.h> // pre processor directive
#define current 2023
int main()
{
    int year,age; //variable declaration  
    printf("\n Enter year of birth ="); 
    scanf("%d",&year);// User input, %f placeholder (float)
    age=current-year; // calculation
    printf("\n Your age is = %d years",age); // output
    return 0;
}