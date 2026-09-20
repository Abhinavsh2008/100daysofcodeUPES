//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include <stdio.h>

int main() {
    int n, pos, value;
    int a[101];

    scanf("%d", &n);

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Read position and value
    scanf("%d %d", &pos, &value);

    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    // Insert element
    a[pos - 1] = value;

    // Print updated array
    for (int i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}




//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

int main() {
    int n, pos;
    int a[100];

    scanf("%d", &n);

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Read position to delete
    scanf("%d", &pos);

    // Shift elements to the left
    for (int i = pos - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    // Print updated array
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

