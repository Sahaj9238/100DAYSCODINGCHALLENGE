/*Q6: Write a program to swap two numbers using a third variable.
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3
Input 2:
-1 1
Output 2:
After swap: 1 -1
*/
#include <stdio.h>
int main(){
    int a,b,temp;       //defining 3 variables to store numbers

    printf("Enter first number:");
    scanf("%d",&a);     //inputing the first number and storing in a

    printf("Enter second number:");
    scanf("%d",&b);     //inputing the second number and storing in b

    //printing the numbers before swapping
    printf("\nNumbersbefore swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    temp=a;     //storing the first number in a temparory variable
    a=b;        //assigning the value of second number to the first variable
    b=temp;     //assigning the value of first variable(currently stored in temp) to the the second variable

    //printing the numbers after swapping
    printf("\nNumber after swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}