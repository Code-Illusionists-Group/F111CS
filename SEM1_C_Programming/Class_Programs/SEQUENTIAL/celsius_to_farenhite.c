//Q.7  program to convert celcius to farenhite using (C × 9/5) + 32 = F

#include <stdio.h> // standarad input output header file
int main()  // function
{   // body of main
    float c,f; // variable declaration
    printf("\n Enter temp in celcius");
    scanf("%f",&c);  // input, %f placeholder, &c = address of c
    f=(c*9/5)+32;
    printf("\n Temp in F = %f", f); // printing result style 1
    printf("\n Temp in C= %f and in F= %f" , c, f); // printing result style 
    return 0;
}