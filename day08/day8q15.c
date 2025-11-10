//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main() {
    char a;     //to store the input entered by the user
    printf("Enter something: ");
    scanf("%c", &a);        //to take the input and storing it in a

    if (a >= 'A' && a <= 'Z') {     //to checki if the input is a uppercase character
        printf("It is an uppercase alphabet.");
    } else if (a >= 'a' && a <= 'z') {      //to check if the input is lower case character
        printf("It is a lowercase alphabet.");
    } else if (a >= '0' && a <= '9') {      //to check if the input is a digit
        printf("It is a digit.");
    } else {        //if none of above then a special character
        printf("It is a special aaracter.");
    }

    return 0;
}
