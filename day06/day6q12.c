#include <stdio.h>

int main(){
    int a;  //defining a variable to store the number entered by the user
    printf("Enter a number:");
    scanf("%d",&a);     //inputting and storing the number in 'a'   

    if (a==0){          //checking if the number is zero 
        printf("It is zero");
    }
    else if (a>0){      //checking if the number is positive
        printf("It is a positive number");
    }
    else{               //if none than it is a negative number
        printf("It is a negative number");
    }

    return 0;
}