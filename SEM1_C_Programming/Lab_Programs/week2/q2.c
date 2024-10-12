#include <stdio.h>
int main() {
    int a, b, c;
    printf("\n Enter 2 num: ");
    scanf("%d %d", &a, &b);
    printf("\n Before swapping a = %d and b = %d", a, b);
    c = a;
    a = b;
    b = c;
    printf("\n After Swapping a = %d and b = %d", a, b);
    return 0;
}

