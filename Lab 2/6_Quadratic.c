/*
Question:
Write a program to calculate the real roots of a quadratic equation ax^2 + bx + c = 0.
If roots are imaginary, display "Error".
*/ 

#include <stdio.h>
#include <math.h> // For sqrt function 


int main() {
    float a, b, c, discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = (b * b) - (4 * a * c);

    if (discriminant < 0) {
        printf("Error: Roots are imaginary.\n");
    } else {
        // Calculate the roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }

    return 0;
}
