/*Q74: Find the transpose of a matrix.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6*/
#include <stdio.h>
int main(){
    int rows, cols; // defining variables to store the rows and columns

    printf("Enter the number of rows: ");
    scanf("%d", &rows); // inputting the no of rows and storing it in rows
    printf("Enter the number of columns: ");
    scanf("%d", &cols); // inputting the no of columns and storing it in cols

    int a[rows][cols],b[cols][rows]; /// defining the array with range of rows and columns entered by the user

    printf("Input elements in the matrix :\n");
    for (int i = 0; i < rows; i++){ // for range to input the values in the array
        for (int j = 0; j < cols; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {            //for range to stranspose the matrix
        for (int j = 0; j < cols; j++) {
            b[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < cols; i++) {            //for range to print the transposed matrix
        for (int j = 0; j < rows; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}