/*Q66: Insert an element in a sorted array at the appropriate position.
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
*/

#include <stdio.h>
int main() {
    int n; // defining variables to store the range of the array

    printf("Enter the range of the array:");
    scanf("%d", &n); // inputting the range and storing it in n

    int a[n], p, add;

    for (int i = 0; i < n; i++){ // for loop to iterate n times and to input and store the element in the array
        printf("Enter a element:");
        scanf("%d", &a[i]);
    }

    int temp;

    for (int i=0;i<n-1;i++){            //for range to sort the array using bubble sort
        for (int j=1;j<n-1-i;j++){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("Sorted array=\n");
    for (int i=0;i<n;i++){              //printing the sorted array
        printf("%d ",a[i]);
    }

    printf("\nInput the value to be inserted : ");
    scanf("%d", &add);              //inputting the numer and storing it in add

    for (int i = 0; i < n; i++) {           //for loop to determine the position where the new value will be inserted
        if (add < a[i]) {
            p = i;
            break;
        } else {
            p = i + 1;
        }
    }

    for (int i = n; i >= p; i--) {          //for loop to move all data at the right side of the array to make space
        a[i + 1] = a[i];
    }

    a[p] = add;                     //inserting the new value at the proper position

    printf("After Insert the list is :\n");         //printing the array after adding the element at proper index
    for (int i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
