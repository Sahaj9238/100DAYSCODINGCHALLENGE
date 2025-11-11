/*Q67: Insert an element in an aay at a given position.
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40
*/
#include <stdio.h>

int main() {
    int n; // defining variables to store the range of the aay

    printf("Enter the range of the array:");
    scanf("%d", &n); // inputting the range and storing it in n

    int a[n];

    for (int i = 0; i < n; i++){ // for loop to iterate n times and to input and store the element in the aay
        printf("Enter a element:");
        scanf("%d", &a[i]);
    }   

    int size,element,pos;

    printf("Enter the element to insert:");
    scanf("%d",&element);
    printf("Enter the position:");
    scanf("%d",&pos);

    if(pos<=n&&pos>=0)
    {
        for(int i=n;i>pos;i--){        //to shift all the elements from the last index to pos by 1 position to right
            a[i] = a[i-1];
        }
        
        a[pos] = element;       //inserting the element at the given position

        for(int i=0;i<n+1;i++){         //printing the array after adding the element
            printf("%d ", a[i]);
        }
    }
    else{               
        printf("Invalid Position\n");
    }
    return 0;
}
