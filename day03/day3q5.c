/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32
Input 2:
100
Output 2:
Fahrenheit=212
*/

#include <stdio.h>
int main(){
    float celcius;      //defining the variable
    printf("Enter the temperature in celsius:");
    scanf("%f",&celcius);       //inputing the temparature in celsius

    float farenheit;        
    farenheit=(celcius*9/5)+32;     //converting from celsius to farenheit and storing in variable "farenheit"
    printf("The entered temperature in farenheit is= %.2f",farenheit);      //printing the result
    return 0;
}
