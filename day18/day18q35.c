// /Write a program to print all factors of a given number.
#include <stdio.h>
int main(){
    int a;      //defining a variable to store the number
    printf("Enter a number:");
    scanf("%d",&a);     //inputting then number and storing it in a

    printf("Factors of %d are:",a);

    for (int i=1;i<=a;i++){         //using for loop to iterate till the number
        if (a%i==0){        //if the number is divisible by any i 
            printf("%d \n",i);      //then prinitng the i as factor of the number
        }
    }

    return 0;
}
