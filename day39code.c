//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/





#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int a[100][100];

    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int distinct = 1;

    // Check diagonal elements
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0)
            break;
    }

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}






//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/



#include <stdio.h>

int main() {
    int rows, cols;
    int a[100][100];
    int sum = 0;

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of main diagonal
    for (int i = 0; i < rows; i++) {
        sum += a[i][i];
    }

    printf("%d", sum);

    return 0;
}
