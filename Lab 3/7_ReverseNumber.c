/*
Question:
Write a program to find the reverse of a given number of arbitrary length.
*/

#include <stdio.h>
int main() {
    int number, reverse = 0, digit;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the reverse of the number
    while (number != 0) {
        digit = number % 10;          // Extract the last digit
        reverse = reverse * 10 + digit; // Append the digit to reverse
        number /= 10;                 // Remove the last digit
    }

    // Print the reversed number
    printf("The reverse of the number is: %d\n", reverse);

    return 0; // End of the program
}
