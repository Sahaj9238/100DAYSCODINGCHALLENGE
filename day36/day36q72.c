/*Q72: Find the sum of all elements in a matrix.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21*/
#include <stdio.h>
int main(){
    int rows, cols;             //defining variables to store the rows and columns

    printf("Enter the number of rows: ");
    scanf("%d", &rows);         //inputting the no of rows and storing it in rows
    printf("Enter the number of columns: ");
    scanf("%d", &cols);         //inputting the no of columns and storing it in cols

    int a[rows][cols];              ///defining the array with range of rows and columns entered by the user

    printf("Input elements in the matrix :\n"); 
    for (int i=0;i<rows;i++) {            //for range to input the values in the array
        for (int j=0;j<cols;j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int sum=0;
    for (int i=0;i<rows;i++){       //for range to calculte the sum of elements
        for(int j=0;j<cols;j++)
        sum=sum+a[i][j];
    }
    printf("Sum of the elements of the array is : %d",sum);     //printing the sum

    return 0;
}