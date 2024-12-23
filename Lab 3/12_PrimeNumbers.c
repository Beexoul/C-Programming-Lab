/*
Question:
Write a program to print all prime numbers from 1 to 200.
*/

#include <stdio.h>
int main() {
    int i, j, isPrime;

    // Print all prime numbers from 1 to 200
    printf("Prime numbers between 1 and 200 are:\n");
    for (i = 2; i <= 200; i++) {
        isPrime = 1; // Assume the number is prime
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) { // Check for factors
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0; // End of the program
}
