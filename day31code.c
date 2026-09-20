//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/




#include <stdio.h>

int main() {
    int n;
    int a[100];
    int target;
    int found = 0;

    scanf("%d", &n);

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &target);

    // Linear search
    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("-1");
    }

    return 0;
}




//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

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

    // Reverse array using swapping
    for (int i = 0; i < n / 2; i++) {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    // Print reversed array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
