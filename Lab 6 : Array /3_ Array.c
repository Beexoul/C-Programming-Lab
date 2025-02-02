/*
Question:
Write a program to read n number from keyboard and find the smallest and largest
number using array.
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    int n, i, arr[100];
    int smallest, largest;

    printf("Enter the size of the array (1-100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        exit(0);
    }

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = largest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The smallest number is: %d\n", smallest);
    printf("The largest number is: %d\n", largest);

    return 0;
}


/*
Enter the size of the array (1-100): 7
Enter the elements of the array:
45
66
12
88
34
99
11
The smallest number is: 11
The largest number is: 99
*/