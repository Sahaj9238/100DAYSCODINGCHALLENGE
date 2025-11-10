//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main(){
    int a,b,hcf,lcm;        //defining variables to store the numbers and the hcf and lcm of the two numbers
    printf("Enter two numbers to find their HCF:");
    scanf("%d %d",&a,&b);       //inputting the two numbers and storing it in a and b repectively 

    for (int i=1;i<=a&&i<=b;i++){       //using for loop to iterate till the lowest number
        if (a%i==0 && b%i==0){          //if both the numbers are divisible by i 
            hcf=i;                      //then hcf = i
        }
    }

    lcm=(a*b)/hcf;      //formula to calculate the lcm

    printf("LCM of the two numbers is:%d",lcm);     //printing the lcm

    return 0;
}
