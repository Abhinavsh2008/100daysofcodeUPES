#include <stdio.h>

int main() {
    int month_number;
    printf("Enter month number (1-12): ");
    scanf("%d", &month_number);

    // Switch case to determine month name and total days
    switch (month_number) {
        case 1:
            printf("Month: January\nDays: 31\n");
            break;
        case 2:
            printf("Month: February\nDays: 28 or 29 (Leap Year)\n");
            break;
        case 3:
            printf("Month: March\nDays: 31\n");
            break;
        case 4:
            printf("Month: April\nDays: 30\n");
            break;
        case 5:
            printf("Month: May\nDays: 31\n");
            break;
        case 6:
            printf("Month: June\nDays: 30\n");
            break;
        case 7:
            printf("Month: July\nDays: 31\n");
            break;
        case 8:
            printf("Month: August\nDays: 31\n");
            break;
        case 9:
            printf("Month: September\nDays: 30\n");
            break;
        case 10:
            printf("Month: October\nDays: 31\n");
            break;
        case 11:
            printf("Month: November\nDays: 30\n");
            break;
        case 12:
            printf("Month: December\nDays: 31\n");
            break;
        default:
            printf("please enter a valid number...\n");
            break;
    }

    return 0;
}




//wap to find profit or loss percentage given cost price and sp?
#include <stdio.h>

int main() {
    float cp, sp, diff, percent;

    printf("Enter cost price: ");
    scanf("%f", &cp);

    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        diff = sp - cp;
        percent = (diff / cp) * 100;
        printf("Profit = %.2f\n", diff);
        printf("Profit Percentage = %.2f%%\n", percent);
    } 
    else if (cp > sp) {
        diff = cp - sp;
        percent = (diff / cp) * 100;
        printf("Loss = %.2f\n", diff);
        printf("Loss Percentage = %.2f%%\n", percent);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}