/*Q61: Search for an element in an array using linear search.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2
Input 2:
4
10 20 30 40
25
Output 2:
-1*/
#include <stdio.h>
int main(){
    int n,b;     //defining variables to store the range of the array and the element to search
    
    printf("Enter the range of the array:");
    scanf("%d",&n);         //inputting the range and storing it in n
    
    int a[n];           //defining the array with n elements in it

    for (int i=0;i<n;i++){          //for loop to iterate n times and to input and store the element in the array
        printf("Enter a element:");
        scanf("%d",&a[i]);
    }

    printf("Enter an element to search:");
    scanf("%d",&b);         //inputting the element to search and storing it in b

    int j=0;
    for(j=0;j<n;j++){           //for loop to iterate and get all the elements of the array and check if they are equal to the search element
        if (a[j]==b){
            printf("The index position of the element is: %d",j);
            break;          //it will print the first occurance of the element
        }
    }

    if (j==n){          //after all the iteration if the element is not found.
        printf("The element is not there in the array");
    }
}
