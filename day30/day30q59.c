/*Q59: Count even and odd numbers in an array.
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3
Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0*/
#include <stdio.h>
int main(){
    int n,odd=0,even=0;     //defining variables to store the range of the array and the number of odd and even nnumbers in the array
    
    printf("Enter the range of the array:");
    scanf("%d",&n);         //inputting the range and storing it in n
    
    int a[n];           //defining the array with n elements in it

    for (int i=0;i<n;i++){          //for loop to iterate n times and to input and store the element in the array
        printf("Enter a element:");
        scanf("%d",&a[i]);
    }

    for (int i=0;i<n;i++){          //for loop to iterate n times and check for every element if it is odd or even
        if (a[i]%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }

    printf("Odd numbers in the array= %d \n",odd);          //printing the number of odd and even elements
    printf("Even numbers in the array= %d",even);
}
