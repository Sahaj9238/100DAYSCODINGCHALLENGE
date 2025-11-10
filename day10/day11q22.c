// /Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main(){
    float cp,sp,profit,loss;
    printf("Enter Cost Price:");
    scanf("%f",&cp);
    printf("Enter Selling Price:");
    scanf("%f",&sp);

    if (cp<sp){
        printf("Profit \n");
        profit=((sp-cp)/cp) *100;
        printf("Profit Percentage= %f",profit);
    }
    else if (cp>sp){
        printf("Loss \n");
        loss=((cp-sp)/cp)*100;
        printf("Loss Percentage= %f",loss);
    }
    else{
        printf("Cost price is equal to Selling Price \n");
        printf("No loss or no Profit");
    }
}