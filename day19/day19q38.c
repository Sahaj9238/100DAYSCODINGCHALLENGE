//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main(){
    int a,sum=0,rem;
    printf("enter a number:");
    scanf("%d",&a);

    while (a!=0){       //using while loop to calculate the reverse of the number entered by the user
        rem=a%10;       //to get the last digit of the a
        sum+=rem;       //to add the digit
        a=a/10;         //remove  the last digit from a
    }
    
    printf("Sum of the digits is: %d",sum);     //printing the sum
    return 0;
}