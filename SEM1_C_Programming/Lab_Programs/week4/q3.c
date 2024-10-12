#include <stdio.h>

int main() {
    int n, i, j, factorial;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial = 1;
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }
        printf("Factorial of %d = %d\n", i, factorial);
    }

    return 0;
}

