// Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int n, temp, digit, i;
    int fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        digit = temp % 10;

        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}