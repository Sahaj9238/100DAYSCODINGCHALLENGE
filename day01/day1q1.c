/*Q1: Write a program to input two numbers and display their sum.
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7
Input 2:
-1 20
Output 2:
Sum = 19
*/

#include <stdio.h>

int main(){ 
    float a,b;         //defining two variables to store the two numbers entered by the user. float type used because the user can enter decimal values also
    
    printf("Enter First Number:");
    scanf("%f",&a);     //inputing the first number and storing it in the variable "a"

    printf("Enter Second Number:");
    scanf("%f",&b);     //inputing the second number and storuing it in the varible "b"

    float sum;          // defining the variable sum
    sum=a+b;            // adding the two nnumbers and storing it in the variable "sum"

    printf("The sum of the two numbers is %f",sum);   //displaying the output
}
