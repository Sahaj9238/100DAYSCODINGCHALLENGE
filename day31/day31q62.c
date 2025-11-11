/*Q62: Reverse an array without taking extra space.
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1*/
#include <stdio.h>
int main(){
    int n;     //defining variables to store the range of the arra
    
    printf("Enter the range of the array:");
    scanf("%d",&n);         //inputting the range and storing it in n
    
    int a[n],b[n];           //defining the arrays with n elements in it

    for (int i=0;i<n;i++){          //for loop to iterate n times and to input and store the element in the array
        printf("Enter a element:");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){           //for loop to iterate n times, get every element from the back of the first array and storing it in the second
        b[i]=a[n-1-i];
    }

    for (int i=0;i<n;i++){          //for loop to print the second array which is thus reversed
        printf("%d \n",b[i]);
    }
}