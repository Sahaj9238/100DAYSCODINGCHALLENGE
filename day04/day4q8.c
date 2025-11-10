/*Q8: Write a program to find and display the sum of the first n natural numbers.
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15
Input 2:
10
Output 2:
Sum=55
*/

#include <stdio.h>
int main(){
    int a,i,sum;        //definin variables to store the user input, i for for-loop, and sum to store the sum of a natural numbers.

    printf("Enter a number:");
    scanf("%d",&a);     //inputting the number and storing it in a.

    if (a>0){           //checking if the number entered is positive
        for(i=1;i<=a;i++){      //using for-loop to increase the value of i till a
            sum+=i;             //adding the value of i to sum and calculating sum.
        }
    }
    else{
        printf("Invalid Input:");       //if the number entered is negative or 0 
    }
   
    printf("The sum of first %d natural nnumbers is %d",a,sum);     //printing the result

    return 0;
}