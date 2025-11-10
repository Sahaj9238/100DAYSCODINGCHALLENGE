//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main(){
    int a,product=1,rem;            //defining the variables to store the number, product and remainder
    printf("Enter a number:");
    scanf("%d",&a);         //inputting the number and storing it in a

    while (a!=0){           //using while loop to calculate the reverse of the number entered by the user
        rem=a%10;           //to get the last digit of the a
        if (rem%2!=0){      //checking if the digit is odd 
            product*=rem;   //multiplying it is product
        }
        a=a/10;             //remove  the last digit from a
    }

    printf("Product of the odd digits of the number is %d",product);            //printing the final product

    return 0;
}
