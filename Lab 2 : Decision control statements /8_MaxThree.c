/*
Question:
Write a program to find the largest among three numbers using nested if-else.
*/
#include <stdio.h>
int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check for the largest number
    if (a >= b) {
        if (a >= c) {
            printf("The largest number is %d.\n", a);
        } else {
            printf("The largest number is %d.\n", c);
        }
    } else {
        if (b >= c) {
            printf("The largest number is %d.\n", b);
        } else {
            printf("The largest number is %d.\n", c);
        }
    }

    return 0;
}
