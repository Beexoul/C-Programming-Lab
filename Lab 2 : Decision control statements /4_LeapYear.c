/*
Question:
Write a program to check if the given year is a leap year or not.
*/

#include <stdio.h>
int main() {
    int year;

    // Input year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("The year %d is a leap year.\n", year);
    } else {
        printf("The year %d is not a leap year.\n", year);
    }

    return 0;
}
