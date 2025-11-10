//Write a program to check if a number is a palindrome.
#include<stdio.h>
int main(){
    int temp,a,rem,rev=0;            //defining the variables to store the number,remainder and the reversed number
    printf("Enter a number:");
    scanf("%d",&a);     //inputting the number and storing it in a 

    temp=a;

    while (a!=0){       //using while loop to calculate the reverse of the number entered by the user
        rem=a%10;       //to get the last digit of the a
        rev=rev*10+rem;     //to append the rem to rev
        a=a/10;         //remove  the last digit from a
    }

    if (temp==rev){         //to check if the number entered by the user and reverse of that number is equal or not
        printf("It is a palindrome");
    }
    else{       
        printf("It is not a palindrome");
    }

    return 0;
}