//Write a program to check if a number is prime.
#include <stdio.h>
int main(){
    int a,prime=1;      //defining variables to store the number and to see if the nubmer is prime or not
    printf("Enter a number:");
    scanf("%d",&a);     //inputting the number and storing it in a

    if (a==0||a==1){        //0 and 1 are always prime numbers 
        prime=1;
    }

    for (int i=2;i<=a/2;i++){       //using for loop to iterate till a/2 
        if (a%i==0){            //if the number is divisible by any i it is not a prime number
            prime=0;
        }
    }

    if (prime==1){          //if prime=1 then the number is a prime number
        printf("It is a prime number");
    }
    else{
        printf("It is not a prime number");
    }

    return 0;
}