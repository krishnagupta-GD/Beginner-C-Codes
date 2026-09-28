#include <stdio.h>

int main() {
    int num, temp, reversed = 0, digit, sum = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    if (num < 10000 || num > 99999) {
        printf("Please enter a valid five-digit number.\n");
    }

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        sum += digit;
        temp /= 10;
    }

    printf("Reversed number = %05d\n", reversed);
    printf("Sum of digits = %d\n", sum);

    return 0;
}