/*
Question:
Write a program to print all three-digit Armstrong numbers.
*/

#include <stdio.h>
#include <math.h>
int main() {
    int i, original, remainder, sum, digits = 3;

    // Print all three-digit Armstrong numbers
    printf("Three-digit Armstrong numbers are:\n");
    for (i = 100; i <= 999; i++) {
        original = i;
        sum = 0;

        // Calculate the sum of the cubes of its digits
        while (original != 0) {
            remainder = original % 10; // Extract the last digit
            sum += pow(remainder, digits); // Cube the digit and add to sum
            original /= 10;
        }

        if (sum == i) { // Check if the number is an Armstrong number
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0; // End of the program
}
