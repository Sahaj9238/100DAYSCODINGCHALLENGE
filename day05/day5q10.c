/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1
Input 2:
7322
Output 2:
2:2:2
*/

#include <stdio.h>

int main() {
    int a, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &a);        //inputting the time in seconds and storing it in a

    hours = a / 3600;       //calculating hours

    minutes = (a % 3600) / 60;      //calculating minutes after extracting the hours

    seconds = (a % 3600) % 60;      //calculating secinds ater extracting the hours and minutes

    printf("H:M:S - %d:%d:%d\n", hours, minutes, seconds);      //printing the time in format-hours,minutes,seconds

    return 0;
}