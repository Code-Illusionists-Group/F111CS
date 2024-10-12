#include <stdio.h>
int main() {
    float marks[5];
    float total = 0.0, percentage;
    printf("Enter the marks for 5 subjects (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    percentage = (total / 500) * 100;
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    if (percentage >= 80) {
        printf("Division: Distinction\n");
    } else if (percentage >= 60) {
        printf("Division: Frist\n");
    } else if (percentage >= 45) {
        printf("Division: Second\n");
    } else {
        printf("Division: Fail\n");
    }
    return 0;
}
