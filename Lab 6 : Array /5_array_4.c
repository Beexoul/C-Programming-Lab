/*
Write a program to read n numbers and find third largest element among n numbers.
*/

#include <stdio.h>

int main() {
    int n, i, j, temp;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[100];
    
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
        printf("Array sorted in Descending Order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("the third largest element  is:\n");
        printf("%d ", arr[2]);
    
    return 0;
}
