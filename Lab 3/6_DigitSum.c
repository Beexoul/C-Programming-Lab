/*
Question:
Write a program to find the sum of the digits of a given number of arbitrary length.
*/

#include <stdio.h>
int main() {
    int number, sum = 0, digit;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of its digits
    while (number != 0) {
        digit = number % 10; // Extract the last digit
        sum += digit;        // Add it to the sum
        number /= 10;        // Remove the last digit
    }

    // Print the result
    printf("The sum of the digits is: %d\n", sum);

    return 0; // End of the program
}
