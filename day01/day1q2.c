/* Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5
Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2
*/


#include <stdio.h>

int main(){ 
    float a,b;         //defining two variables to store the two numbers entered by the user.
    
    printf("Enter First Number:");
    scanf("%f",&a);     //inputing the first number and storing it in the variable "a"

    printf("Enter Second Number:");
    scanf("%f",&b);     //inputing the second number and storuing it in the varible "b"

    float sum;          // defining the variable sum
    sum=a+b;            // adding the two nnumbers and storing it in the variable "sum"

    float diff;
    diff=a-b;

    float product;
    product=a*b;

    printf("The sum of the two numbers is %f \n",sum);   //displaying the output
    printf("The difference of the two numbers is %f \n",diff);   //displaying the output
    printf("The product of the two numbers is %f \n",product);   //displaying the output

    if (b==0){
        printf("Division by 0 not possible");
    }
    else{
        float quotient;
        quotient=a/b;
        printf("The quotient of the two numbers is %f \n",quotient);   //displaying the output
    }
    
}