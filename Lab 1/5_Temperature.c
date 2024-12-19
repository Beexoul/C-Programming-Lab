/*
Question:
Write a program to input temperature in Celsius and print its Fahrenheit equivalent.
Formula: Fahrenheit = (Celsius * 9 / 5) + 32
*/

#include <stdio.h>


int main() {
    float celsius, fahrenheit;

    // Ask user to input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the temperature in Fahrenheit
    printf("Temperature in Fahrenheit = %.2f°F\n", fahrenheit);

    return 0; // End of the program
}
