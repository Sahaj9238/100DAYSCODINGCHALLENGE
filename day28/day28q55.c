/*Q55: Write a program to print all the prime numbers from 1 to n.
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7
Input 2:
20
Output 2:
2 3 5 7 11 13 17 19
*/
#include <stdio.h>
int main(){
    int a,prime=0;          //defining the variables to store the number and 1 if the number is not prime and 0 if the number is prime
    
    printf("Enter a number:");
    scanf("%d",&a);     //inputting the number and storing it in a
    
    printf("Prime numbers between the range of 1 to %d are:",a);

    for(int i=2;i<=a;i++){          //for range to iterate till the number a
        prime=0;        //setting prime=0 for every number
        for (int j=2;j<=i/2;j++){       //for loop to iterate till divisor from 2 to i/2
            if(i%j==0){         //if any number is divisible it is not prime
                prime=1;
                break;
            }
        }
        if (prime==0){          //if prime=0 it means that the number is prime 
            printf("%d \n",i);
        }
    }
    return 0;
} 
