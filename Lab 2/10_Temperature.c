/*
Question:
Write a program to read temperature in Fahrenheit and print:
"Nice day" if temperature > 60 and < 80,
"Cold day" if <= 60,
"Hot day" if >= 80.
*/
#include <stdio.h>s
int main() {
    float temperature;

    // Input temperature
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &temperature);

    // Check the conditions
    if (temperature > 60 && temperature < 80) {
        printf("Nice day\n");
    } else if (temperature <= 60) {
        printf("Cold day\n");
    } else {
        printf("Hot day\n");
    }

    return 0;
}
