
/*
Question:
Write a program to find the maximum among two numbers.
*/
#include <stdio.h>
int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Compare and find the maximum
    if (num1 > num2) {
        printf("The maximum number is %d.\n", num1);
    } else {
        printf("The maximum number is %d.\n", num2);
    }

    return 0;
}
