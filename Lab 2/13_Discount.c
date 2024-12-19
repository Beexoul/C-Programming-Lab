/*
Question:
Write a program to calculate the final bill after applying supermarket discounts:
- 5% discount for all customers
- An additional 10% discount for female customers if the total bill exceeds Rs. 5000
*/
#include <stdio.h>


int main() {
    float totalBill, finalBill;
    char gender;

    // Input total bill and gender
    printf("Enter the total bill amount: ");
    scanf("%f", &totalBill);
    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    // Apply 5% discount for all customers
    finalBill = totalBill - (totalBill * 0.05);

    // Apply additional 10% discount for female customers if the bill exceeds Rs. 5000
    if (gender == 'F' || gender == 'f') {
        if (totalBill > 5000) {
            finalBill -= (finalBill * 0.10);
        }
    }

    // Print the final bill
    printf("Final bill amount: Rs. %.2f\n", finalBill);

    return 0;
}
