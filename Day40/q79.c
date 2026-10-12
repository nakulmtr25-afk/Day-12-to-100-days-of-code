Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int sum = 0; sum <= r + c - 2; sum++) {

        for (int i = 0; i < r; i++) {

            int j = sum - i;

            if (j >= 0 && j < c) {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}