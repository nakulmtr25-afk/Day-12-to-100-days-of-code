Q77: Check if the elements on the diagonal of a matrix are distinct.
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

    int flag = 1;

    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < r; j++) {
            if (a[i][i] == a[j][j]) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
        printf("True");
    else
        printf("False");

    return 0;
}