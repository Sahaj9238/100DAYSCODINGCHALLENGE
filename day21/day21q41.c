/*Q41: Write a program to swap the first and last digit of a number.
Sample Test Cases:
Input 1:
1234
Output 1:
4231
Input 2:
1001
Output 2:
1001
*/
#include <stdio.h>

int main(){
    int num,first,last,temp,count=0,power=1;            //defining variables

    printf("Enter a number: ");
    scanf("%d", &num);              //inputting the number and storing it in num

    last=num%10;                // Get last digit

    temp=num;
    while(temp>=10){    
        temp=temp/10;           // Get first digit
        power=power*10;         // Multiply power by 10 each time
        count++;
    }
    first = temp;

    int middle=num%power;           // Remove first digit
    middle=middle/10;

    int new=last*power+middle*10+first;         //swapping

    printf("After swapping first and last digit: %d\n", new);

    return 0;
}
