//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    char c;         //defining variable to store the sign
    float num1, num2, result;           //defining variables to store the numbers and the result

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);           //inputting 2 numbers and storing it in num1 and num2 respectively.

    printf("Enter the sign (+, -, *, /, %%): ");
    scanf(" %c", &c);           //inputting the sign to perform the operation

    switch (c) {
        case '+':           //case 1 if user entered + sign
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':           //case 2 if user entered - sign
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':           //case 3 if user entered * sign
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':           //case 4 if user entered / sign
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':           //case 5 if user entered % sign
            if (num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("%d %% %d = %f\n", (int)num1, (int)num2, result);
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;
        default:            //invalid sign entered by the user
            printf("Error: Invalid sign entered.\n");
    }

    return 0;
}
