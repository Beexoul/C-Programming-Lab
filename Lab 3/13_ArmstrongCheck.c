/*
Question:
Write a program to check whether the given number is an Armstrong number or not.
*/

#include <stdio.h>
#include <math.h>
int main() {
    int number, original, remainder, sum = 0, digits = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    original = number; // Store the original number

    // Count the number of digits
    while (number != 0) {
        number /= 10;
        digits++;
    }

    number = original; // Reset number

    // Calculate the sum of the cubes of its digits
    while (number != 0) {
        remainder = number % 10; // Extract the last digit
        sum += pow(remainder, digits); // Raise the digit to the power of digits and add
        number /= 10;
    }

    // Check if the number is an Armstrong number
    if (sum == original) {
        printf("The number is an Armstrong number.\n");
    } else {
        printf("The number is not an Armstrong number.\n");
    }

    return 0; // End of the program
}
