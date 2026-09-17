
//Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/


#include <stdio.h>

int main(){
    int i, j;

    // Upper half
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}





//Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/



#include <stdio.h>

int main(){
    int i, j, spaces;

    // Upper half
    for (i = 1; i <= 4; i++) {
        // Print spaces
        for (spaces = 1; spaces <= 4 - i; spaces++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half
    for (i = 3; i >= 1; i--) {
        // Print spaces
        for (spaces = 1; spaces <= 4 - i; spaces++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
