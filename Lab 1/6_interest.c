/*
Question:
Write a program to calculate simple interest amount.
Formula: SI = (P * r * t) / 100
Where:
P = Principal amount
r = Rate of interest
t = Time in years
*/

#include <stdio.h>

int main() {
    float P, r, t, SI;

    // Input principal, rate, and time
    printf("Enter the principal amount (P): ");
    scanf("%f", &P);

    printf("Enter the rate of interest (r): ");
    scanf("%f", &r);

    printf("Enter the time period in years (t): ");
    scanf("%f", &t);

    // Calculate Simple Interest
    SI = (P * r * t) / 100;

    // Display the calculated interest
    printf("Simple Interest = %.2f\n", SI);

    return 0; // End of the program
}
