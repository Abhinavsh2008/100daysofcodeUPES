//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/



#include <stdio.h>

int main() {
    int rows, cols;
    int a[100][100];
    int sum[100];

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find sum of each row
    for (int i = 0; i < rows; i++) {
        sum[i] = 0;

        for (int j = 0; j < cols; j++) {
            sum[i] += a[i][j];
        }
    }

    // Print row sums
    for (int i = 0; i < rows; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}




//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/



#include <stdio.h>

int main() {
    int rows, cols;
    int a[100][100];

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Print transpose
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

