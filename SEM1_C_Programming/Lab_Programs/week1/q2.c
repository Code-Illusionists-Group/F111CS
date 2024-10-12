#include <stdio.h>
void main()
{
float fh, cl;
printf("Enter temperature in Fahrenheit:");
scanf("%f", &fh);
cl = (fh - 32) * 5 / 9;
printf("Temperature in celsius: %.2f\n", cl);
}

