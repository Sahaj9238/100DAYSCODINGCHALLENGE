//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main(){
    int a,product=1;        //defining variables to store the number and the product
    printf("Enter a number:");
    scanf("%d",&a);         //inputting the number and storing it in a

    for (int i=1;i<=a;i++){             //iterating the loop till the number entered
        if (i%2==0){            //checking if the number is even or not
            product=product*i;      //calculating product
        }
    }

    printf("Product= %d",product);          //printing product
    return 0;
}