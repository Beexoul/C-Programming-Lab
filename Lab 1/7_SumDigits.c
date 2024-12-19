/*
Question:
Write a program to input a 3-digit number and print the sum of its digits.
Example: Input = 123; Output = 6 (1 + 2 + 3)
*/

#include <stdio.h>
int main() {
    int number, digit1, digit2, digit3, sum;

    // Input a 3-digit number
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    // Extract each digit
    digit3 = number % 10;  // Last digit
    number = number / 10;  
    digit2 = number % 10;  // Middle digit
    digit1 = number / 10;  // First digit

    // Calculate the sum of digits
    sum = digit1 + digit2 + digit3;

    // Display the result
    printf("Sum of digits = %d\n", sum);

    return 0; // End of the program
}
