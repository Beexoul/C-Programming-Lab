/*
Question:
Write a program to find the sum of even and odd numbers 
between 50 and 500, as well as count them.
*/

#include <stdio.h>
int main() {
    int evenSum = 0, oddSum = 0, evenCount = 0, oddCount = 0;
    int i;

    // Loop through numbers from 50 to 500
    for (i = 50; i <= 500; i++) {
        if (i % 2 == 0) { // Check if even
            evenSum += i;
            evenCount++;
        } else { // Else it's odd
            oddSum += i;
            oddCount++;
        }
    }

    // Print results
    printf("Even Sum: %d, Even Count: %d\n", evenSum, evenCount);
    printf("Odd Sum: %d, Odd Count: %d\n", oddSum, oddCount);

    return 0; // End of the program
}
