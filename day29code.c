//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/



#include <stdio.h>

int main() {
    int n;
    int a[100];
    int sum = 0;

    scanf("%d", &n);

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    // Print sum
    printf("%d", sum);

    return 0;
}





//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/


#include <stdio.h>

int main() {
    int n;
    int a[100];

    scanf("%d", &n);

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    int min = a[0];

    // Find maximum and minimum
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }

        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("Max=%d, Min=%d", max, min);

    return 0;
}
