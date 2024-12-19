/*
Question:
Write a program to read three sides of a triangle and print its area for valid data.
Print "Invalid data" if one side is greater than or equal to the sum of the other two sides.
*/
#include <stdio.h>
#include <math.h>



int main() {
    float a, b, c, s, area;

    // Input three sides
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Validate the sides
    if (a + b > c && a + c > b && b + c > a) {
        // Calculate semi-perimeter
        s = (a + b + c) / 2;

        // Calculate the area using Heron's formula
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area of the triangle = %.2f\n", area);
    } else {
        printf("Invalid data: Triangle sides do not satisfy the condition.\n");
    }

    return 0;
}
