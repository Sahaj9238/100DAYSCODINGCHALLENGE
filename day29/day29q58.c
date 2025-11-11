/*Q58: Find the maximum and minimum element in an array.
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1
Input 2:
3
10 10 10
Output 2:
Max=10, Min=10*/
#include <stdio.h>
int main(){
    int n,max,min;              //defining variables to store the range of the array, maximum and minimum element

    printf("Enter the range of the array:");
    scanf("%d",&n);             //inputting the range and storring it in n

    int a[n];           //defining the array to store n elements

    for (int i=0;i<n;i++){          //for loop to iterate n times and store each element in the array
        printf("Enter the element:");
        scanf("%d",&a[i]);
    }

    max=a[0];           //setting maximum and minimum elements to the first element of the array
    min=a[0];

    for(int i=1;i<n;i++){           //for loop to iterate n time to get every element of the array
        if (a[i]>max){          //checking for every element if it is greater than the first element of the array
            max=a[i];
        }
        if (a[i]<min){         //checking for every element if it is smaller than the first element of the array
            min=a[i];
        }
    }

    printf("Maximum element of the array= %d \n",max);          //printing the maximum and minimum elements of the array
    printf("Minimum element of the array= %d",min);
}