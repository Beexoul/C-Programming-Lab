#include<stdio.h>
#include <stdio.h>

int main() {
    int num1, num2, result, choice;                                                                                                                                                                                                                                                                                                                                                      
    printf("Enter the 1st num: ");
    scanf("%d", &num1);
    printf("Enter the 2nd num: ");
    scanf("%d", &num2);
    printf("Enter your choice \n 1) Addition \n 2) Subtraction \n 3) Product \n 4) Divide ");
    scanf(" %d", &choice);  

    switch (choice) {
        case 1:
            printf("Addition");
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case 2:
            printf("Subtraction");
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case 3:
            printf("Product");
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        case 4:
            printf("Division");
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed!\n");
            }
            break;
        default:
            printf("Error while entering the choice\n");
    }

    return 0;
}
