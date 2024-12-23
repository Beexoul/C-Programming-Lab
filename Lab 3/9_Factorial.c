/*
Question:
Write a program to find the factorial of a given number.
*/

#include <stdio.h>
int main() {
    int number, i;
    unsigned long long factorial = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the factorial
    for (i = 1; i <= number; i++) {
        factorial *= i; // Multiply by the current number
    }

    // Print the factorial
    printf("The factorial of %d is: %llu\n", number, factorial);

    return 0; // End of the program
}
