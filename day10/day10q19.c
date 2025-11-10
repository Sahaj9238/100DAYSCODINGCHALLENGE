//Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>

int main() {
    int a;

    printf("Enter the month number (1-12): ");
    scanf("%d", &a);

    switch (a) {
        case 1:
            printf("Month: January\n");
            printf("Days=31");
            break;
        case 2:
            printf("Month: February\n");
            printf("Days=28/29");
            break;
        case 3:
            printf("Month: March\n");
            printf("Days=31");
            break;
        case 4:
            printf("Month: April\n");
            printf("Days=30");
            break;
        case 5:
            printf("Month: May\n");
            printf("Days=31");
            break;
        case 6:
            printf("Month: June\n");
            printf("Days=30");
            break;
        case 7:
            printf("Month: July\n");
            printf("Days=31");
            break;
        case 8:
            printf("Month: August\n");
            printf("Days=31");
            break;
        case 9:
            printf("Month: September\n");
            printf("Days=30");
            break;
        case 10:
            printf("Month: October\n");
            printf("Days=31");
            break;
        case 11:
            printf("Month: November\n");
            printf("Days=30");
            break;
        case 12:
            printf("Month: December\n");
            printf("Days=31");
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}
