//Write a program to check if a number is an Armstrong number.
#include<stdio.h>
#include <math.h>
int main(){
    int a,rem,count=0,n=0;              //defining variable to store the number, its reverse, no of digits in the number 
    printf("Enter a number:");
    scanf("%d",&a);             //inputting the number and storing it in a

    while (a!=0){           //loop to count the no of digits in the number entered by the user
        a=a/10;
        count++;       
    }

    while (a!=0){       //loop to calculate the armstrong(i.e. every digit has the power of no of digits in that number)
        rem=a%10;
        n=n+pow(a,count);
        rem=a/10;
    }

    if (a==n){          //if the original number is equal to the armstrong 
        printf("it is a armstrong number");
    }
    else{
        printf("it is not a armstrong number");
    }

    return 0;
}
