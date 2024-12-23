/*
Question:
Write a program to print the multiplication table of a given number.
*/

#include <stdio.h>
int main() {
    int number, i;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print the multiplication table
    printf("Multiplication table of %d:\n", number);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0; // End of the program
}
