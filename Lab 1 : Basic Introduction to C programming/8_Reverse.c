/*
Question:
Write a program to input a 4-digit integer number and print it in reverse order.
Example: Input = 674; Output = 476
*/

#include <stdio.h>
int main() {
    int number, digit1, digit2, digit3, digit4;

    // Input a 4-digit number
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    // Extract digits one by one
    digit4 = number % 10;  // Last digit
    number = number / 10;

    digit3 = number % 10;  // Third digit
    number = number / 10;

    digit2 = number % 10;  // Second digit
    digit1 = number / 10;  // First digit

    // Print the digits in reverse order
    printf("Reversed number = %d%d%d%d\n", digit4, digit3, digit2, digit1);

    return 0; // End of the program
}
