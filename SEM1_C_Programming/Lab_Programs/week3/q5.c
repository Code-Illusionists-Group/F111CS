#include <stdio.h>

int main() {
    char color;

    printf("Enter a character to get the corresponding color of the rainbow (v, i, b, g, y, o, r): ");
    scanf(" %c", &color); 

    switch (color) {
        case 'v':
        case 'V':
            printf("\nViolet\n");
            break;
        case 'i':
        case 'I':
            printf("\nIndigo\n");
            break;
        case 'b':
        case 'B':
            printf("\nBlue\n");
            break;
        case 'g':
        case 'G':
            printf("\nGreen\n");
            break;
        case 'y':
        case 'Y':
            printf("\nYellow\n");
            break;
        case 'o':
        case 'O':
            printf("\nOrange\n");
            break;
        case 'r':
        case 'R':
            printf("\nRed\n");
            break;
        default:
            printf("\nColor is not in rainbow\n");
            break;
    }

    return 0;
}

