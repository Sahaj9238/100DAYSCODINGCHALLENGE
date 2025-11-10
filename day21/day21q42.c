//Write a program to check if a number is a perfect number.
#include <stdio.h>
int main(){
    int a,sum=0;        //defining varibales to store the number and sum
    printf("Enter a number:");
    scanf("%d",&a);     //inputting the number and storing it in a

    for (int i=1;i<=a;i++){     //loop till a to get its factors
        if (a%i==0){        //if a is divisible by i
            sum+=i;         //its the factor of a to add it in sum
        }
    }
    if (a*2==sum){          //if the sum is equal to the double of the original number then it is a perfect number
        printf("It is a perfect number");
    }
    else{
        printf("It is not a perfect number");
    }
}