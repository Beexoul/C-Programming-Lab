
/*
Question:
Write a program to calculate the total electricity bill based on the following rates:
- First 20 units: Rs. 80
- Next 80 units: Rs. 7.5 per unit
- Next 100 units: Rs. 8.5 per unit
- Beyond 200 units: Rs. 9.5 per unit
Additionally, a tax of 15% is applied to the total amount.
*/
#include <stdio.h>

int main() {
    int units;
    float total = 0, tax;

    // Input the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate the total charge
    if (units <= 20) {
        total = 80;
    } else if (units <= 100) {
        total = 80 + (units - 20) * 7.5;
    } else if (units <= 200) {
        total = 80 + (80 * 7.5) + (units - 100) * 8.5;
    } else {
        total = 80 + (80 * 7.5) + (100 * 8.5) + (units - 200) * 9.5;
    }

    // Add tax
    tax = total * 0.15;
    total += tax;

    // Print the total charge
    printf("Total electricity bill: Rs. %.2f\n", total);

    return 0;
}
