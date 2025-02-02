/*
Question:
Write a program to calculate the grade of a student based on the percentage:
- >= 85: Grade A
- 70 <= percentage < 85: Grade B
- 55 <= percentage < 70: Grade C
- 45 <= percentage < 55: Grade D
- 32 <= percentage < 45: Grade E
- < 32: Grade F
*/
#include <stdio.h>


int main() {
    float marks1, marks2, marks3, marks4, total, percentage;

    // Input marks for four subjects
    printf("Enter marks of four subjects: ");
    scanf("%f %f %f %f", &marks1, &marks2, &marks3, &marks4);

    // Calculate total marks and percentage
    total = marks1 + marks2 + marks3 + marks4;
    percentage = (total / 400) * 100;

    // Assign grade based on percentage
    if (percentage >= 85) {
        printf("Grade: A\n");
    } else if (percentage >= 70) {
        printf("Grade: B\n");
    } else if (percentage >= 55) {
        printf("Grade: C\n");
    } else if (percentage >= 45) {
        printf("Grade: D\n");
    } else if (percentage >= 32) {
        printf("Grade: E\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
