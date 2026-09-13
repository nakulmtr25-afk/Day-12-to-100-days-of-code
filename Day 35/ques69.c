Q69: Find the second largest element in an array.

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100];
    int n, i;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    scanf("%d", &n);

    // Read array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find largest and second largest
    for (i = 0; i < n; i++) {

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("%d\n", secondLargest);

    return 0;
}