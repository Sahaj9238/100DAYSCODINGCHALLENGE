//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main(){
    int a,numerator=2,denominator=3;        //defining variables to store the number, numerator by defualt at 1 and denominator by defualt at 2
    double sum=0.0;
    printf("Enter the range:");     
    scanf("%d",&a);             //inputting the number and storing it in a

    for (int i=1;i<=a;i++){     //loop till the range entered
        numerator+=2;       //in the given series numberator and denominator both increase by 2 and 4 respectively
        denominator+=4;
        sum+=(double) numerator/denominator;        //calculating the sum
    }

    printf("Sum of the series= %f",sum);        //printing the sum of the series
}
