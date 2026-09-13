Q68: Delete an element from an array.

#include <stdio.h>

int main() {
    int arr[100];
    int n, i, pos;

    scanf("%d", &n);

    // Read array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read index to delete
    scanf("%d", &pos);

    // Shift elements to the left
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    // Print updated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}