/*Q56: Read and print elements of a one-dimensional array.
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30
Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5
*/
#include <stdio.h>
int main(){
    int n;      //defining variable to store the range of the array

    printf("Enter the range of the array(less than 50):");
    scanf("%d",&n);     //inputting the range and storing it in n

    int a[n];       //defining the array till n

    for (int i=0;i<n;i++){          //for range to iterate till n and inputting the value and storing it in the array
        printf("Enter a element:");
        scanf("%d",&a[i]);
    }

    printf("Elements of the array are:");       
    for(int j=0;j<a[j];j++){        //for loop to iterate in the array and printing the values sstored in the array one by one
        printf("%d ",a[j]);
    }

    return 0;
}