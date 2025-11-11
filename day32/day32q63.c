/*Q63: Merge two arrays.
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5*/
#include <stdio.h>
int main(){
    int n,d,i=0;     //defining variables to store the range of the arrays
    
    printf("Enter the range of the first array:");
    scanf("%d",&n);         //inputting the range and storing it in n
    
    int a[n];           //defining the arrays with n elements in it

    for (int i=0;i<n;i++){          //for loop to iterate n times and to input and store the element in the array
        printf("Enter a element:");
        scanf("%d",&a[i]);
    }

    printf("Enter the range of the second array:");
    scanf("%d",&d);             //inputting the range of the second array and storing it in d

    int b[d];               //defining array that can store d elements

    for (int i=0;i<d;i++){          //for loop to iterate d times and to input and store the element in the array
        printf("Enter a element:");
        scanf("%d",&b[i]);
    }

    int e=n+d;          //variable storing the sum of the ranges of both the arrays
    int c[e];           //defining the third array that can store the elements of both the arrays

    for(i=0;i<n;i++){       //for range to store the elements of the first array
        c[i]=a[i];
    }
    for(int j=0;j<d;j++){           //for range to store the elements of the second array
        c[i+j]=b[j];
    }

    printf("Merged Array=");
    for(int i=0;i<e;i++){           //for range to print the merged array
        printf("%d   ",c[i]);
    }
    return 0;
}
