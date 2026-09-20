
//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/



#include <stdio.h>

int main() {
    int n;
    int a[100];

    scanf("%d", &n);

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int largest = a[0];
    int secondLargest = a[0];

    // Find largest
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    // Find second largest
    for (int i = 0; i < n; i++) {
        if (a[i] < largest && a[i] > secondLargest) {
            secondLargest = a[i];
        }
    }

    printf("%d", secondLargest);

    return 0;
}






//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/



#include <stdio.h>

int main() {
    int n, k;
    int a[100];

    scanf("%d", &n);

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    // If k is greater than n
    k = k % n;

    // Rotate right by k positions
    for (int r = 0; r < k; r++) {
        int last = a[n - 1];

        for (int i = n - 1; i > 0; i--) {
            a[i] = a[i - 1];
        }

        a[0] = last;
    }

    // Print rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
