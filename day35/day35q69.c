/*Q68: Delete an element from an aay.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5
*/
#include <stdio.h>
int main(){
    int n; // defining variables to store the range of the array

    printf("Enter the range of the array:");
    scanf("%d", &n); // inputting the range and storing it in n

    int a[n];

    for (int i = 0; i < n; i++){ // for loop to iterate n times and to input and store the element in the aay
        printf("Enter a element:"    );
        scanf("%d", &a[i]);
    }

    int temp;

    for (int i=0;i<n;i++){            //for range to sort the array using bubble sort
        for (int j=1;j<n-1-i;j++){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    int second=a[n-2];          //variable to store the second largest number in the element
    printf("The second largest element in the array is: %d",second);            //printing the second largest element
    return 0;
}
