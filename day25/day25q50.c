/*Write a program to print the following pattern:
*****
****
***
**
*
*/
#include <stdio.h>
int main(){
    char c='*';
    for (int i=5;i>=1;--i){
        for (int j=1;j<=i;++j){
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}