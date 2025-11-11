/*Q60: Count positive, negative, and zero elements in an array.
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1*/
#include <stdio.h>
int main(){
    int n,pos=0,zero=0,neg=0;     //defining variables to store the range of the array and the number of positives,negatives and zeroes in the array
    
    printf("Enter the range of the array:");
    scanf("%d",&n);         //inputting the range and storing it in n
    
    int a[n];           //defining the array with n elements in it

    for (int i=0;i<n;i++){          //for loop to iterate n times and to input and store the element in the array
        printf("Enter a element:");
        scanf("%d",&a[i]);
    }

    for (int i=0;i<n;i++){          //for loop to iterate n times and check for every element if it is positive,negstive or zero
        if (a[i]%2>0){
            pos+=1;
        }
        else if(a[i]==0){
            zero+=1;
        }
        else{
            neg+=1;
        }
    }

    printf("Positive numbers in the array= %d \n",pos);          //printing the number of positive,negative and zeroes
    printf("Negative numbers in the array= %d \n",neg);
    printf("Zeros in the array= %d",zero);
}