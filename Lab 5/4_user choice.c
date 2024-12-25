#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice, n = 1;

    while (n == 1) {
        printf("\nMenu for your choice\n");
        printf("1. Reverse\n");
        printf("2. Sum \n");
        printf("3. Print all  ASCII code \n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);  

        switch (choice) {
            case 1: {
                int number,reverse = 0, digit;
                printf("Enter a number: ");
                scanf("%d", &number);
                while (number != 0) {
                digit = number % 10;          // Extract the last digit
                reverse = reverse * 10 + digit; // Append the digit to reverse
                number /= 10;                 // Remove the last digit
                }
                printf("%d is the reverse",reverse);
                break;
            }
            case 2: {
                int number,sum = 0, digit;
                printf("Enter a number: ");
                scanf("%d", &number);
                while (number != 0) {
                digit = number % 10;         
                sum = sum + digit;
                number /= 10;                 
                }
                printf("%d is the reverse",sum);
                break;
            }
            case 3: {
            for (int i = 0; i < 256; i++) 
            {
                printf("ASCII %d: %c\n", i, i);
                }
                break;
            }

            case 4: {
                printf("Exiting the program. Goodbye!\n");
                exit(0);
            }

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }

        printf("\nDo you want to continue? (1 for Yes, 0 for No): ");
        scanf("%d", &n);
    }

    return 0;
}
