#include <stdio.h>

int main() {
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("January has 31 days\n");
            break;
        case 2:
            printf("February has 28 days (29 in a leap year)\n");
            break;
        case 3:
            printf("March has 31 days\n");
            break;
        case 4:
            printf("April has 30 days\n");
            break;
        case 5:
            printf("May has 31 days\n");
            break;
        case 6:
            printf("June has 30 days\n");
            break;
        case 7:
            printf("July has 31 days\n");
            break;
        case 8:
            printf("August has 31 days\n");
            break;
        case 9:
            printf("September has 30 days\n");
            break;
        case 10:
            printf("October has 31 days\n");
            break;
        case 11:
            printf("November has 30 days\n");
            break;
        case 12:
            printf("December has 31 days\n");
            break;
        default:
            printf("Error: Invalid month number. Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}

