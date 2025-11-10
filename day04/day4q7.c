/*Q7: Write a program to swap two numbers without using a third variable.
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10
Input 2:
7 14
Output 2:
After swap: 14 7
*/

#include <stdio.h>
int main(){
    int a,b;       //defining 2 variables to store numbers

    printf("Enter first number:");
    scanf("%d",&a);     //inputing the first number and storing in a

    printf("Enter second number:");
    scanf("%d",&b);     //inputing the second number and storing in b

    a = a + b;      // to store the sum of the teo numbers
    b = a - b;      // b now has the value of original a(sum-original b)
    a = a - b;      // a now has the value of origial b(sum-original a)

    //printing the numbers after swapping
    printf("\nNumber after swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}
