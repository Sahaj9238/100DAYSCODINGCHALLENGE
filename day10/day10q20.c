//Write a program to display the day of the week based on a number (1–7) using switch-case.
#include <stdio.h>

int main() {
    int a;          //defining a variable to store thr user input
    printf("Enter a number (1-7) to determine the day of the week: ");
    scanf("%d", &a);        //inputting the number and storing it in a
    switch (a) {        //using switch case to determine the day
        case 1:  
            printf("It is Sunday.\n", a);
            break; 
        case 2:
            printf("It is Monday.\n", a);
            break;
        case 3:
            printf("It is Tuesday.\n", a);
            break;
        case 4:
            printf("It is Wednesday.\n", a);
            break;
        case 5:
            printf("It is Thursday.\n", a);
            break;
        case 6:
            printf("It is Friday.\n", a);
            break;
        case 7:
            printf("It is Saturday.\n", a);
            break;
        default: 
            printf("Invalid input. Please enter a number between 1 and 7.\n");
    }

    return 0; 
}