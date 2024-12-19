/*
Question:
Write a program to read the radius of a circle and find its area.
Formula: Area = π * r * r
*/

#include <stdio.h>


int main() {
    float radius, area,Pi;
    Pi= 3.1416;

    // Ask user to input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area using the formula
    area = Pi * radius * radius;

    // Display the calculated area
    printf("Area of the circle = %.2f\n", area);

    return 0; // End of the program
}
