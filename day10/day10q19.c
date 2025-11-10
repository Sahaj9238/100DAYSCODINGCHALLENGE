//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main(){
    int l1,l2,l3;           //defining variables to store the side of the triangle
    printf("Enter side 1 of the triangle:");        
    scanf("%d",&l1);        //inputting side 1 of the triangle and storing it in l1
    printf("Enter side 2 of the triangle:");
    scanf("%d",&l2);        //inputting side 2 of the triangle and storing it in l2
    printf("Enter side 3 of the triangle:");
    scanf("%d",&l3);        //inputting side 3 of the triangle and storing it in l3

    if (l1+l2>l3 && l2+l3>l1 && l1+l3>l2){      //checking if the trianlge is valid or not
        if (l1 == l2&&l2 ==l3){             //to check for equilateral triangle
            printf("it is a equi triangle");
        }
        else if ((l1*l1+l2*l2==l3*l3)||(l2*l2+l3*l3==l1*l1)||(l1*l1+l3*l3==l2*l2)){         //to check for right angle triangle
            printf("it is a right triangle");
        }
        else if ((l1 == l2)||(l2==l3)||(l3 == l1)){         //to check for isoceles triangle
            printf("it is a isoceles triangle");
        }
        else{           //if nont then scalene triangle
            printf("it is a scalene traingle");
        }
    }
    else{       //if not a valid triangle
        printf("It is not a valid triangle");
    }

    return 0;
}
