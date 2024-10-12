#include <stdio.h>
int main() {
    float basic, allowance, hra, total_salary;

    printf("Enter the basic salary: ");
    scanf("%f", &basic);

    printf("Enter the allowance: ");
    scanf("%f", &allowance);

    hra = 0.40 * basic;
    total_salary = basic + hra + allowance;

    printf("Total salary: %.2f\n", total_salary);

    return 0;
}


