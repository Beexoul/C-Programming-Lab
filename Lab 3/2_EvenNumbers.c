/*
Question:
Write a program to print even numbers between 20 and 200.
*/

#include <stdio.h>
int main() {
    int i;

    printf("Even numbers between 20 and 200 are:\n");
    for (i = 20; i <= 200; i++) {
        if (i % 2 == 0) { // Check if the number is even
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0; // End of the program
}
