//Write a program to reverse a given number.
#include<stdio.h>
int main(){
    int a,rem,rev=0;            //defining the variables to store the number,remainder and the reversed number
    printf("Enter a number:");
    scanf("%d",&a);     //inputting the number and storing it in a 

    while (a!=0){       //using while loop to calculate the reverse of the number entered by the user
        rem=a%10;       //to get the last digit og the a
        rev=rev*10+rem;     //to append the rem to rev
        a=a/10;         //remove  the last digit from a
    }

    printf("Reverse of the number is %d",rev);      //printing the reversed number
    return 0;
}