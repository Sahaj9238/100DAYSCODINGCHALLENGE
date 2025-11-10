/*Write a program to calculate simple and compound interest for given principal, rate, and time.*/

#include <stdio.h>
#include <math.h> // including math library to use pow() function

int main() {
    float p, r, t;

    printf("Enter the principal amount: ");
    scanf("%f", &p);        //inputiting the principle ammount and storing it in p

    printf("Enter the annual rate of interest (in %%): ");
    scanf("%f", &r);        //inputting the rate of interest and storing it in r

    printf("Enter the time period in years: ");
    scanf("%f", &t);        //inputing the time period and storing it in t

    float simple_interest, compound_interest, amount_compound;

    simple_interest = (p * r * t) / 100;        //calculating simples interest

    //calculating compound interest
    amount_compound = p * pow((1 + r / 100), t);
    compound_interest = amount_compound - p;

    //printing simple interest and compound interest
    printf("\nSimple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}
