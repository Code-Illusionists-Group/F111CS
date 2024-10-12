//Q.2 WAP to convert AED in INR where 1 AED = 22.54 INR

#include <stdio.h>
int main()
{
    float aed, inr;                        //variable declaration 
    printf("\n Enter amount in AED:"); 
    scanf("%f",&aed);              // User input, %f placeholder (float)
    inr=aed*22.74;                   // calculation
    printf("\n Amount in INR = %f",inr); // output
    return 0;
}