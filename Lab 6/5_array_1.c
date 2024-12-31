/*
WAP to input n number in an array and sort them in Ascending order. 
*/

#include <stdio.h>

int main() {
    int n, i, j, temp;
    
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input n numbers into the array
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sorting the array in Ascending Order using Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Swap elements if they are in the wrong order
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    // Print the sorted array in Ascending Order
    printf("Array sorted in Ascending Order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
