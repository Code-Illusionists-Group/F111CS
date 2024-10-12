// Q1. Check if a user passed or failed, and print their academic division based on percentage earnt
#include <stdio.h>

int main()
{
    float s1, s2, s3, per; // Marks for subjects 1,2,3; percentage
    printf("\nEnter marks in 3 subjects: ");
    scanf("%f %f %f", &s1, &s2, &s3);
    per = (s1 + s2 + s3) * 100 / 300; // Calculates percentage
    printf("\nPercentage = %.2f", per);
    if (per >= 80)
    {
        printf("\nDIVISION I\n");
    }
    else if (per >= 60) // Runs only if per is NOT >= 80 (ie the next "else if" runs only when the previous if/else if's condition is false)
    {
        printf("\nDIVISION II\n");
    }
    else if (per >= 40) // Runs only if per is NOT >= 60
    {
        printf("\nDIVISION III\n");
    }
    else // Runs after all previous ifs and else if conditions are false
    {
        printf("\nFAIL\n");
    }
    return 0;
}