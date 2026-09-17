//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/


#include <stdio.h>

int main() {
    int n;
    int factorial = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("%d", factorial);

    return 0;
}



//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/


#include <stdio.h>

int main() {
    int n, reverse = 0, digit;

    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("%d", reverse);

    return 0;
}

