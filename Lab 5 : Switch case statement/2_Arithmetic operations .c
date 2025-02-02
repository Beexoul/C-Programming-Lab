#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;                                                                                                                                                                                                                                                                                                                                                      
    printf("Enter the 1st num: ");
    scanf("%d", &num1);
    printf("Enter the 2nd num: ");
    scanf("%d", &num2);
    printf("Enter an operator ( '+' for Addition , '-' for Subtraction , '*' for Product, '/' for Division): ");
    scanf(" %c", &operator);  

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        case '/':
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
