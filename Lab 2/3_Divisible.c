/*
Question:
Write a program to check if the given number is exactly divisible by 5 but not 7.
*/
#include <stdio.h>
int main() {
    int number;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check conditions
    if (number % 5 == 0 && number % 7 != 0) {
        printf("The number is divisible by 5 but not 7.\n");
    } else {
        printf("Condition not satisfied.\n");
    }

    return 0;
}
