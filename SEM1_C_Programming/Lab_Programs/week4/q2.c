#include <stdio.h>

int reverse(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int temp = num;
    do {
        sum += temp % 10;
        temp = temp/10;
    } while (temp != 0);
    
    int revSum = reverse(sum);
    if (num == sum * revSum) {
        printf("%d is a magic number.\n", num);
    } else {
        printf("%d is not a magic number.\n", num);
    }
    
    return 0;
}

