//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/




#include <stdio.h>

int main() {
    int rows, cols;
    int a[100][100], b[100][100], sum[100][100];

    // Input size of first matrix
    scanf("%d %d", &rows, &cols);

    // Input first matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input size of second matrix
    int rows2, cols2;
    scanf("%d %d", &rows2, &cols2);

    // Input second matrix
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Add matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print result
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}




//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/


#include <stdio.h>

int main() {
    int rows, cols;
    int a[100][100];
    int symmetric = 1;

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // A symmetric matrix must be square
    if (rows != cols) {
        symmetric = 0;
    } else {
        // Check a[i][j] == a[j][i]
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (a[i][j] != a[j][i]) {
                    symmetric = 0;
                    break;
                }
            }

            if (symmetric == 0)
                break;
        }
    }

    if (symmetric)
        printf("True");
    else
        printf("False");

    return 0;
}
