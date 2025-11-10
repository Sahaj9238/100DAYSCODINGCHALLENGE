//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main(){
    int a,sum=0;          //defining variables to store the number and sum
    printf("Enter the number:");
    scanf("%d",&a);         //inputting the number and storing it in a
    a=a*2;          //multiplying a with 2 to extend the range
    
    for (int i=1;i<=a;i++){         //iterating the loop til a*2 to get all the numbers
        if(i%2==0){         //checking for even numbers 
            continue;
        }
        else{       //if it is odd then add the number      
            sum=sum+i;
        }
    }
    printf("Sum=%d",sum);       //printing the sum
    return 0;
}
