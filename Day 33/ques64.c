Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long n;
    int digit, i;
    int count[10] = {0};
    int maxDigit = 0;

    scanf("%lld", &n);

    // Count frequency of each digit
    if (n == 0) {
        count[0] = 1;
    }

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    // Find digit with maximum frequency
    for (i = 1; i <= 9; i++) {
        if (count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}