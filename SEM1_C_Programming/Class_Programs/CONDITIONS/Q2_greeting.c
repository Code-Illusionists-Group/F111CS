// Q2. Greet user based on input of m, a, e ,n
#include <stdio.h>

int main()
{
    char charac;
    printf("Enter time of the day (m/a/e/n): ");
    scanf("%c", &charac);
    if (charac == 'm' || charac == 'M') // Checks for both uppercase and lowercase letters
    {
        printf("\nGood morning!");
    }
    else if (charac == 'a' || charac == 'A')
    {
        printf("\nGood afternoon!");
    }
    else if (charac == 'e' || charac == 'E')
    {
        printf("\nGood evening!");
    }
    else if (charac == 'n' || charac == 'N')
    {
        printf("\nGood night!");
    }
    else // Runs if user didn't input any of the above characters
    {
        printf("\nInvalid input!");
    }
    printf("\n");
    return 0;
}