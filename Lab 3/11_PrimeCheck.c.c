/*
Question:
Write a program to check whether the given number is prime or not.
*/

#include <stdio.h>
int main() {
    int number, i, isPrime = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime
    if (number <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i <= number / 2; i++) {
            if (number % i == 0) { // Check for factors
                isPrime = 0;
                break;
            }
        }
    }

    // Print the result
    if (isPrime) {
        printf("The number is prime.\n");
    } else {
        printf("The number is not prime.\n");
    }

    return 0; // End of the program
}
