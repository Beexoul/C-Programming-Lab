/*
Question:
Write a program to generate the Fibonacci series up to the nth term.
*/

#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next, i;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the Fibonacci series
    printf("Fibonacci series up to %d terms:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second; // Calculate the next term
        first = second;
        second = next;
    }
    printf("\n");

    return 0; // End of the program
}
