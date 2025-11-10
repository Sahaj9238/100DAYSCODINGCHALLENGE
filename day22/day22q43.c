//Write a program to check if a number is a strong number
#include <stdio.h>
int main() {
    int n,temp,rem,sum = 0;         //defining variables
    printf("Enter a number:");
    scanf("%d",&n);     //inputting the number and storing it in a
    temp=n;

    while (n) {         //loop till n
        int i=1,fact=1;
        rem=n%10;       //getting the last digit of the number
        while (i <= rem) {      //loop to get the factorial
            fact=fact*i;
            i++;
        }
        sum=sum+fact;       //adding the factorials
        n=n/10;
    }

    if (sum==temp)      //if the sum of factorials of the digits  of the number is equal to the original number is ia perfecr number
        printf("it is a strong number", temp);
    else
        printf("it is not a strong number", temp);

    return 0;
}
