//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
#include <math.h>


int main(){ 
    int n,i,a,count=0,r=0;              //defining variables
    printf("enter a number=");
    scanf("%d",&n);         //inputting and storing the number in a

    for(i=1;n!=0;i++){      //loop till the number is not 0     
        a=n%2;          // get remainder when divided by 2
        if(a==1){
            r=r+pow(10,count);      //place 1 at the correct decimal place
        }
        count++;
        n=n/2;      //to move to the next binary digit
    }
  printf("%d",r);

  return 0;
}
