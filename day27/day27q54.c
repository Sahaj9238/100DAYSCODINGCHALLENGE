/*Write a program to print the following pattern:
   *
  ***
 *****
*******
 *****
  ***
   *
 */
#include <stdio.h>
int main() {
    char c='*';
    for(int i=1;i<=8;i+=2){
        for (int k=1;k<=8-i;k++){
            printf(" ");
        }
        for (int j=1;j<=i;j++){
            printf(" %c",c);
            
        }
        printf("\n");
    }
    for(int i=5;i>=1;i-=2){
        for (int k=1;k<=8-i;k++){
            printf(" ");
        }
        for (int j=1;j<=i;j++){
            printf(" %c",c);
            
        }
        printf("\n");
    }
    return 0;
}
