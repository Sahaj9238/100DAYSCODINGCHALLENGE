/*Q76: Check if a matrix is symmetric.
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True
Input 2:
2 2
1 0
2 1
Output 2:
False*/
#include <stdio.h>
int main(){    
    int m,n;
    printf("enter the no of rows in matrix A:");
    scanf("%d",&m);
    printf("enter the no of columns in matrix A:");
    scanf("%d",&n);
    if(m!=n)
    {
        printf("To be a symmetric matrix , the matrix should be square matrix first ");
        return 1;
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++){
            if (x[i][j]!=x[j][i])
            {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
    return 0;
}
