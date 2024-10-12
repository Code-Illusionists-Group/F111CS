/* Q3. Make a basic calculator that can perform the four basic arithmatic operations on two numbers
The numbers must be of type int, and the operator of type char*/
#include <stdio.h>

int main()
{
    int flag = 1;       // Checks if user entered a correct operator -> 1 = True, 0 = False. We're initially assuming that the user will input the correct operator
    float a, b, result; // Will accept decimal values
    char op;            // Operator: can be '+', '-'. '*', '/'

    printf("Enter number a, operation (+,-,*,/) and number b: "); // eg) 4.1 + 5 | 5 - 2.9 | 12 * 9 | 5 / 2.1
    scanf("%f %c %f", &a, &op, &b);

    /*
        //The above is equivalent to:

        printf("Enter numbers a and b: ");
        scanf("%f %f", &a, &b);

        printf("Enter the operation (+,-,*,/): ");
        scanf("\n%c", &op); // "\n" is only there cause the program wont run properly otherwise, due to an unknown issue -> only happens when a scanf with %c is preceded by another scanf above it
        // TL;DR: dw about the extra "\n" there
    */
    if (op == '+')
        result = a + b;
    else if (op == '-')
        result = a - b;
    else if (op == '*')
        result = a * b;
    else if (op == '/')
        result = a / b;
    else
        flag--; // Decrements flag, so flag = 0, meaning the user did NOT enter a valid operator

    if (flag)                                 // Shorthand for "if(flag==1) -> works for any type of variable, where any non-zero value is 1 (true) and zero is 0 (false)"
        printf("The result is %.2f", result); // %.2f -> rounds/truncates decimal to 2 decimal places. Change the nubmer behind the period to modify no. of decimal places
    else
        printf("Incorrect input!");

    printf("\n");
    return 0;
}