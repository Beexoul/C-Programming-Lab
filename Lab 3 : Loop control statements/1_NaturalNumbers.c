/*
Question:
Write a program to print the first 100 natural numbers.
*/

#include <stdio.h>
int main() {
    int i;
    printf("The first 100 natural numbers are:\n");
    for (i = 1; i <= 100; i++) {
        printf("%d ", i); // Print each number
    }
    printf("\n"); // Add a newline for better formatting

    return 0; // End of the program
}
