/*
Question:
Write a program to swap two variables.
Example: Input = a=5, b=10; Output = a=10, b=5
*/

#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two variables
    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    // Swap using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Display the swapped values
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0; // End of the program
}
