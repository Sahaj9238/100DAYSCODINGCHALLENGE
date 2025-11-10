//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main(){
    int a,numerator=1,denominator=2;        //defining variables to store the number, numerator by defualt at 1 and denominator by defualt at 2
    double sum=0.0;
    printf("Enter the range:");     
    scanf("%d",&a);             //inputting the number and storing it in a

    if (a>=1){
        sum=1.0;        //there is 1 in all the series
    }

    for (int i=1;i<=a;i++){     //loop till the range entered
        numerator+=2;       //in the given series numberator and denominator boht increase by 2
        denominator+=2;
        sum+=(double) numerator/denominator;        //calculating the sum
    }

    printf("Sum of the series= %f",sum);        //printing the sum of the series
}