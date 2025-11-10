//Write a program to find the roots of a quadratic equation and categorize them.
#include <math.h>
#include <stdio.h>
int main() {
    float a, b, c;          //defining variable to store coefficients
    float disc, r1, r2 ;        //defining the variable to store the discriminant and roots
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);      //inpputting the coefficients and storing in a, b, c respectively

    disc=b*b-4*a*c;         //caalculating the discriminant

    if (disc > 0) {                 // condition for real and different roots
        r1=(-b+sqrt(disc))/(2*a);
        r2=(-b-sqrt(disc))/(2*a);
        printf("Roots are real and different");
        printf("r1 = %.2f and r2 = %.2f", r1, r2);
    }
    else if (disc == 0) {       // condition for real and equal roots
        r1=r2=-b/(2*a);
        printf("Roots are real and equal");
        printf("r1 = r2 = %.2f;", r1);
    }
    else {             // if roots are not real
        printf("Roots are complex");
    }

    return 0;
} 
