Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int arr[100];
    int n, k, i, j, last;

    scanf("%d", &n);

    // Read array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n;

    // Rotate k times
    for (i = 0; i < k; i++) {

        last = arr[n - 1];

        // Shift elements to the right
        for (j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }

        arr[0] = last;
    }

    // Print rotated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}