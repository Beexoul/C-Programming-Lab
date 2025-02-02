/*
Question:
Read a positive integer value and compute the sequence:
If the number is even, divide by 2.
If the number is odd, multiply by 3 and add 1.
If the input value is less than 1, print "ERROR".
*/

#include <stdio.h>

int main() {
    int number;

    // Input a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check for invalid input
    if (number < 1) {
        printf("ERROR: Number must be greater than 0.\n");
    } else {
        // Process the number
        if (number % 2 == 0) {
            printf("Result: %d\n", number / 2);
        } else {
            printf("Result: %d\n", (number * 3) + 1);
        }
    }

    return 0;
}
