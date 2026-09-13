Q57: Find the sum of array elements.

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find sum
    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("%d\n", sum);

    return 0;
}