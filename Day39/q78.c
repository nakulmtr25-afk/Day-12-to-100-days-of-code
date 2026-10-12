Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    int sum = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        sum = sum + a[i][i];
    }

    printf("%d", sum);

    return 0;
}