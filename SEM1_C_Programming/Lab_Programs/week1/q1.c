#include <stdio.h>

int main() {
    float marks1, marks2, marks3, marks4, marks5;
    float sum, average, percentage;
   
    printf("Enter the marks obtained in 5 courses:\n");
    scanf("%f %f %f %f %f", &marks1, &marks2, &marks3, &marks4, &marks5);

    sum = marks1 + marks2 + marks3 + marks4 + marks5;
   
    average = sum / 5.0;
    percentage = (sum / 500.0) * 100;

    printf("Average: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}

