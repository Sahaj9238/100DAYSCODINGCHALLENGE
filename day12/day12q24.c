//Write a program to calculate an electricity bill based on units consumed.
#include <stdio.h>
int main(){
    float a,bill;       //defining variables to store the user input and calculate bill
    printf("Enter the Units used:");
    scanf("%f",&a);     //inputting the units used and storiung it in a

    if (a<=50){         //if units less than 50
        bill=a*5;
        printf("Bill= %f",bill);
    }
    else if (a<=150){       //if units less than 150
        bill=a*6.3;
        printf("Bill= %f",bill);
    }
    else if (a<=250){       //if units less than 250
        bill=a*8.8;
        printf("Bill= %f",bill);
    }
    else{       //if units more than 250
        bill=a*10;
        printf("Bill= %f",bill);
    }
    return 0;
}