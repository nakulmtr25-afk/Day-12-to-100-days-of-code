Q61: Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, i, key;
    int arr[100];
    int index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Found at index %d\n", index);
    } else {
        printf("-1\n");
    }

    return 0;
}