//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/


#include <stdio.h>

int main() {
    int n, key;
    int a[100];

    scanf("%d", &n);

    // Read sorted array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    int low = 0;
    int high = n - 1;
    int index = -1;

    // Binary search
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == key) {
            index = mid;
            break;
        } else if (a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (index != -1) {
        printf("Found at index %d", index);
    } else {
        printf("-1");
    }

    return 0;
}




//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/


#include <stdio.h>

int main() {
    int n, value;
    int a[101];

    scanf("%d", &n);

    // Read sorted array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Element to insert
    scanf("%d", &value);

    // Find position and shift elements
    int pos = n;

    for (int i = 0; i < n; i++) {
        if (value < a[i]) {
            pos = i;
            break;
        }
    }

    for (int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = value;

    // Print updated array
    for (int i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
