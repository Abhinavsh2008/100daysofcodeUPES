//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/



#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Diagonal traversal
    for (int d = 0; d < n + m - 1; d++) {

        int row = (d < m) ? 0 : d - m + 1;
        int col = (d < m) ? d : m - 1;

        int temp[100];
        int k = 0;

        // Store current diagonal
        while (row < n && col >= 0) {
            temp[k++] = a[row][col];
            row++;
            col--;
        }

        // Print in alternating direction
        if (d % 2 == 0) {
            for (int i = 0; i < k; i++)
                printf("%d ", temp[i]);
        } else {
            for (int i = k - 1; i >= 0; i--)
                printf("%d ", temp[i]);
        }
    }

    return 0;
}



//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    scanf("%d %d", &r1, &c1);

    int a[r1][c1];

    // Input first matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);

    int b[r2][c2];

    // Input second matrix
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible");
        return 0;
    }

    int result[r1][c2];

    // Initialize and multiply
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;

            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
