/*
Question:
Write a program to find the sum of n natural numbers.
*/

#include <stdio.h>
int main() {
    int n, sum = 0, i;

    // Input the value of n
    printf("Enter a number n: ");
    scanf("%d", &n);

    // Calculate the sum of n natural numbers
    for (i = 1; i <= n; i++) {
        sum += i; // Add i to the sum
    }

    // Print the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0; // End of the program
}
