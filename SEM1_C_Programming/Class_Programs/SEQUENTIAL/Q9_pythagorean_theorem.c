// Q.9 WAP to print the third angle of a triangle if user inputs the remaining 2 angles.
/* program find the third angle of a triangle given remaining 2 angles  */
#include <stdio.h> // standarad input output header file
#define triangle 180
int main()          // function
{                   // body of main
    int a1, a2, a3; // variable declaration
    printf("\n Enter angle 1 and 2 :");
    scanf("%d %d", &a1, &a2); // input, %d placeholder (int), & = address
    a3 = triangle - (a1 + a2);
    printf("\n Angle 3= %d", a3); // printing result
    return 0;
}