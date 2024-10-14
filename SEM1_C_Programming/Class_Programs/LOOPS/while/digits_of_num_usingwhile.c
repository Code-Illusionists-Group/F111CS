//Q.7 digits of a no using while

#include <stdio.h>

int main() {
    int n = 1234, rem, digits[10], count = 0;
    while (n > 0) {
        rem = n % 10; digits[count++] = rem; n /= 10;
    }
    for (int i = count - 1; i >= 0; i--) printf("%d\n", digits[i]);
    return 0;
}
