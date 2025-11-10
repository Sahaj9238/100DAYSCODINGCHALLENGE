//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main(){
    int a,rem;      //defining variables to store the number and remainder  
    printf("enter a binary number number(using 0s and 1s):");
    scanf("%d",&a);     //inputting the  number and storing it in a

    while(a!=0){        //loop till the a is not 0
        rem=a%10;       //to ge the last digit of the number
        if (rem==1){        //if the last digit is 1 change it by 0
            printf("0");
        }
        else if (rem==0){       //else change it by 1
            printf("1");
        }
        a=a/10;     //remove last digit from a
    }   
    return 0;
}