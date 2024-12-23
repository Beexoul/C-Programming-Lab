/*
Question:
Write a program to check whether the given number is a palindrome or not.
*/

#include <stdio.h>
int main() {
    int number, original, reverse = 0, digit;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    original = number; // Store the original number

    // Calculate the reverse of the number
    while (number != 0) {
        digit = number % 10;          // Extract the last digit
        reverse = reverse * 10 + digit; // Append the digit to reverse
        number /= 10;                 // Remove the last digit
    }

    // Check if the number is a palindrome
    if (original == reverse) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0; // End of the program
}
