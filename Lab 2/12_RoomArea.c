/*
Question:
Write a program to read the length and breadth of a room, calculate its area, and classify:
- "Auditorium" if area > 2500
- "Hall" if 500 <= area <= 2500
- "Big room" if 150 < area < 500
- "Small room" if area <= 150
*/
#include <stdio.h>

int main() {
    float length, breadth, area;

    // Input length and breadth
    printf("Enter the length and breadth of the room: ");
    scanf("%f %f", &length, &breadth);

    // Calculate the area
    area = length * breadth;

    // Classify the room based on area
    if (area > 2500) {
        printf("Auditorium\n");
    } else if (area >= 500 && area <= 2500) {
        printf("Hall\n");
    } else if (area > 150 && area < 500) {
        printf("Big room\n");
    } else {
        printf("Small room\n");
    }

    return 0;
}
