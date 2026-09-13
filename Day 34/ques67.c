Q67: Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int arr[100];
    int n, i, pos, element;

    scanf("%d", &n);

    // Read array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read position and element
    scanf("%d %d", &pos, &element);

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = element;
    n++;

    // Print array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}