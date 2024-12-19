/*
Question:
Write a program to find the area of a rectangle.
Formula: Area = Length * Breadth
*/

#include <stdio.h>

int main() {
    float length, breadth, area;

    // Ask user to input length and breadth
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate the area
    area = length * breadth;

    // Display the calculated area
    printf("Area of the rectangle = %.2f\n", area);

    return 0; // End of the program
}
