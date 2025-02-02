/*
Question:
Write a program to check whether the given number is odd or even.
*/

#include <stdio.h>
int main() {
    int number;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("The number is Even.\n");
    } else {
        printf("The number is Odd.\n");
    }

    return 0; // End of the program
}
