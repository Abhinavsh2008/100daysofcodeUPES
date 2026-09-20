//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/


#include <stdio.h>

int main() {
    int n, m;
    int a[100], b[100], merged[200];

    // Input first array
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        merged[i] = a[i];
    }

    // Input second array
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
        merged[n + i] = b[i];
    }

    // Print merged array
    for (int i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}





//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/


#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};

    scanf("%lld", &n);

    // Count frequency of each digit
    while (n > 0) {
        int digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }

    // Find the digit with maximum frequency
    int max = 0;
    int digit = 0;

    for (int i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            digit = i;
        }
    }

    printf("%d", digit);

    return 0;
}


