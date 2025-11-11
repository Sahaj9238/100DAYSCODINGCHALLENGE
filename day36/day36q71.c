/*Q71: Read and print a matrix.
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4*/
#include <stdio.h>

int main() {
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

    printf("\nThe matrix is : \n");         
    for (int i=0;i<rows;i++) {            //for range to pring the array
        for (int j=0;j<cols;j++) {
            printf("%d ", a[i][j]); 
        }
        printf("\n"); 
    }
    return 0;
}
