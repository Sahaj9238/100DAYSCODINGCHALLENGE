/*Q64: Find the digit that occurs the most times in an integer number.
Sample Test Cases:
Input 1:
112233
Output 1:
1
Input 2:
887799
Output 2:
7*/
#include <stdio.h>

int main(){
    int n; // defining variables to store the range of the array

    printf("Enter the range of the first array:");
    scanf("%d", &n); // inputting the range and storing it in n

    int a[n]; // defining the arrays with n elements in it

    for (int i = 0; i < n; i++){ // for loop to iterate n times and to input and store the element in the array
        printf("Enter a element:");
        scanf("%d", &a[i]);
    }

    int occurrences = 0;            //defining variables to store the occurences, max no of times an element occurs and the elements that occurs max times
    int max_occurrences = 0;
    int max_value = 0;

    for (int i = 0; i < n; i++){        //for range to to iterate n times 
        occurrences = 0;                //setting occurence 0 for every element by default
        for (int j = 0; j < n; j++){    //for range to iterate n time and get eevery element and check if it is same as the original element in the outer loop
            if (a[j] == a[i]){          //if yes than increase the occurence by one
                occurrences++;
            }
        }

        if (occurrences > max_occurrences){     //setting max occurence by using if block
            max_occurrences = occurrences;
            max_value = a[i];
        }
    }

    printf("Elements occuring the most number of times is: %d\n", max_value);       //printing the element that has occured the most number of times

    return 0;
}