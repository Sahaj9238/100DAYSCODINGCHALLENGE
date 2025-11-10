/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>

int main(){
    float a,b;            //defining the variables as float becasue the lenght and breadth can be in decimal type also
    printf("Enter length of the rectangle:");   
    scanf("%f",&a);        //inputing the lenght and storing in a

    printf("Enter breadth of the rectangle:");
    scanf("%f",&b);        //inputing the breadth and storing in b

    float area,perimeter;
    area=a*b;               //calculating area
    perimeter=2*(a+b);      //calculating perimeter

    printf("Area of rectangle is: %f \n",area);     //printing area
    printf("Perimeter of the rectangle is: %f",perimeter);      //printing perimeter
    return 0;
}
