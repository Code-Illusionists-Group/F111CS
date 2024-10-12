#include <stdio.h>
int main() {
    float x, y;
    printf("Enter the coordinates (x y): ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0) {
        printf("Quadrant I\n");
    } else if (x < 0 && y > 0) {
        printf("Quadrant II\n");
    } else if (x < 0 && y < 0) {
        printf("Quadrant III\n");
    } else if (x > 0 && y < 0) {
        printf("Quadrant IV\n");
    } else if (x == 0 && y != 0) {
        printf("On Y-axis\n");
    } else if (y == 0 && x != 0) {
        printf("On X-axis\n");
    } else {
        printf("Origin\n");
    }
    return 0;
}
