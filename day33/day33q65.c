/*Q65: Search in a sorted array using binary search.
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3
Input 2:
5
1 3 5 7 9
6
Output 2:
-1*/
#include<stdio.h>
int main(){
    int n; // defining variables to store the range of the array

    printf("Enter the range of the array:");
    scanf("%d", &n); // inputting the range and storing it in n

    int a[n], p, add;

    for (int i = 0; i < n; i++){ // for loop to iterate n times and to input and store the element in the array
        printf("Enter a element:");
        scanf("%d", &a[i]);
    }   

    int temp;

    for (int i=0;i<n-1;i++){            //for range to sort the array using bubble sort
        for (int j=1;j<n-1-i;j++){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("Sorted array=\n");
    for (int i=0;i<n;i++){              //printing the sorted array
        printf("%d ",a[i]);
    }

    int key;                //defining variable to store the number
    printf("\nEnter the element to search: ");
    scanf("%d",&key);           //inputting the number to search andd storing it in key

    int left=0, right=n-1, index=-1;

    while(left<=right){                 //while loop to search for the element using binary search
        int mid=(left+right)/2;
        if(a[mid]==key){
            index=mid;
            break;
        }
        else if(a[mid]<key){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    
    printf("%d is present at index: %d",key, index);            //printing the index positiion of the number
    return 0;
}
