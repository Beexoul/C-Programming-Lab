/*
Question:
Write a program to find the largest among four numbers.
*/

#include <stdio.h>

int main() {
    int a, b, c, d, max;

    // Input four numbers
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Compare to find the maximum
    max = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    printf("The largest number is %d.\n", max);

    return 0;
}
