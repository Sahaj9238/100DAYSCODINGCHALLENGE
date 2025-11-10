//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main(){
    int a,factorial=1;          //defining variables to store the number and the factorial
    printf("Enter a number:");
    scanf("%d",&a);         //inputting the number and storing it in a 

    for(int i=1;i<=a;i++){          //iterating the loop till the number entered by the user
        factorial=factorial*i;          //calculating the factorial
    }

    printf("Factorial of the number %d = %d",a,factorial);      //printing the factorial
    return 0;
}
