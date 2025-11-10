//Write a program to print numbers from 1 to n.
#include <stdio.h>
int main(){
    int a;          //defining variable to store the number 
    printf("Enter the number to print numbers:");
    scanf("%d",&a);         //inputting the number and storing it in a

    for (int i=1;i<=a;i++){         //for loop to iterate till the number entered
        printf("%d \n",i);          //printing the value of i 
    }
    return 0;
}