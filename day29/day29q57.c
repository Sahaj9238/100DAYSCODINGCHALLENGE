/*Q57: Find the sum of array elements.
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3*/
#include <stdio.h>
int main(){
    int n,sum=0;        //declaring varibales to store the range for array and the sum

    printf("Enter the number of elements to be taken in the array:");
    scanf("%d",&n);             //inputting the range and storing it in n

    int a[n];           //declating the array that can store n elements
    for (int i=0;i<n;i++){          //for range to iterate n time to input the variables and store them in the array
        printf("Enter the elements:");
        scanf("%d",&a[i]);
    }

    for (int i=0;i<n;i++){          //for range to interate till n times, get every element of the array and adding it in the sum
        sum=sum+a[i];
    }
    printf("The sum of elements of the array is: %d",sum);          //printing the sum 
}
