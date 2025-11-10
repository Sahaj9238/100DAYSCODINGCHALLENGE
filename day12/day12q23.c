//Write a program to calculate a library fine based on late days.
#include <stdio.h>
int main(){
    int a,fine;         //defining variable to store the user inpur and the fine
    printf("Enter the number of late days:");
    scanf("%d",&a);         //inputting the no of late days from the user and storing it in a
    if (a<5){               // for firsrt 5 days
        fine=a*2;
        printf("Fine= %d",fine);
    }
    else if (a>5 && a<10){      //next 5 days
        fine=a*4;
        printf("Fine= %d",fine);
    }
    else if (a>10 && a<30){     //next 20 days
        fine=a*6;
        printf("Fine= %d",fine);
    }   
    else if (a>30){     //more than 30 days
        print("Membership canceled");
    }
    return 0;
}
