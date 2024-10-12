#include <stdio.h>
int main() {
    int asciiValue;

    printf("Enter an ASCII value (0-255): ");
    scanf("%d", &asciiValue);

    if (asciiValue < 0 || asciiValue > 255) {
        printf("Invalid input! Please enter a value between 0 and 255.\n");
    } else {
        printf("The character for ASCII value %d is: '%c'\n", asciiValue, (char)asciiValue);
    }

    return 0;
}
