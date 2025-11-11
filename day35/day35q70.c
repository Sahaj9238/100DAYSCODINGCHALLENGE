/*Q70: Rotate an array to the right by k positions.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3*/
#include <stdio.h>
int main(){
    int n; // defining variables to store the range of the array

    printf("Enter the range of the array:");
    scanf("%d", &n); // inputting the range and storing it in n

    int a[n];

    for (int i = 0; i < n; i++){ // for loop to iterate n times and to input and store the element in the aay
        printf("Enter a element:");
        scanf("%d", &a[i]);
    }

    int k;          //defining variable to store the no of times user wants to rotate the array
    printf("Enter the no of time you want to rotate:");
    scanf("%d",&k);     //inoputting the nuvmer and storing it in k

    for (int i=0;i<k;i++){          //for range to rotate the array to right by one postion each time till k
        int last=a[n-1];
        for (int j=n-1;j>0;j--) {
            a[j]=a[j-1];
        }
        a[0]=last;      
    }

    printf("Array after rotation=");
    for (int i=0;i<n;i++){          //printing the array after roatation
        printf("%d ",a[i]);
    }
    return 0;
}
