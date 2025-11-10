//Write a program to assign grades based on a percentage input.
#include <stdio.h>
int main(){
    float a;        //variable to store the percentage
    printf("Enter your percentage:");
    scanf("%f",&a);     //inputting and storing in a

    if(a>=90){      //conidions
        printf("Grade: A");
    }
    else if (a>=80){
        printf("Grade: B");
    }
    else if (a>=70){
        printf("GRade: C");
    }
    else if (a>=60){
        printf("GRade: D");
    }
    else{
        printf("Fail");
    }
    return 0;
}