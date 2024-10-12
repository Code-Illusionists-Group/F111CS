//Q.4 WAP to print SI  where principle,rate of interest and time are user input
#include <stdio.h>
int main()
{
    float p,r,t,si; //variable declaration  
    printf("\n Enter principle, rate, time :"); 
    scanf("%f %f %f",&p,&r, &t);// User input, %f placeholder (float)
    si=(p*r*t)/100; // calculation
    printf("\n Simple Interest = %f",si); // output
    return 0;
}
