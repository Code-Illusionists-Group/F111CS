// Q4. heck if a number is positive, negative or zero
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
        printf("POSITIVE");
    else if (num < 0)
        printf("NEGATIVE");
    else
        printf("ZERO");

    return 0;
}